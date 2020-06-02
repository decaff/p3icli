%{

/*
 * MODULE
 *    lex.l - p3icli's scanner.
 *
 * warning -- this scanner is highly dependent upon flex features and macros.
 *
 */

#include <ctype.h>
#include <string.h>
#include <errno.h>
#include <io.h>

#include "y.tab.h"
#include "cdefs.h"

#ifndef isatty          /* an MSism */
#define isatty _isatty
#endif


#define YY_NO_UNISTD_H

#define        P3ICLI_ERR_TOK   '\001' /* LEX token that forces parser error. */

typedef struct kywd_struct { const char *id; int val; } KYWD;

static int     process_string(void), process_number(char *);
static int     picref_lookahead(void), make_filename_token(char *);
static int     convert_number(char *, int, long *);

/*
 * MUST be sorted in ascending order, which main() cks during
 * its initializations.
 */
static KYWD keywds[] =
{
    { "ansi",         ANSI },
    { "as",           AS },
    { "caps",         CAPS },
    { "clean",        CLEAN },
    { "comments",     CMTS },
    { "copy",         COPY },
    { "custom",       CUSTOM },
    { "default",      DEFAULT },
    { "delete",       DELETE },
    { "dif",          DIF },
    { "discard",      DISCARD },
    { "dup",          DUPLICATE },
    { "duplicate",    DUPLICATE },
    { "encoding",     ENCODING },
    { "exit",         HALT },      /* re-use of byacc token */
    { "files",        FILES },
    { "fix",          FIX },
    { "fmt",          FMT },
    { "format",       FMT },
    { "from",         FROM },
    { "geometries",   GEOMETRIES },
    { "halt",         HALT },
    { "html",         HTML },
    { "ignore",       IGNORE },
    { "image",        IMAGE },
    { "insert",       INSERT },
    { "kill",         KILL },
    { "list",         LIST },
    { "minimized",    MINIMIZED },
    { "move",         MOVE },
    { "no",           NO },
    { "off",          OFF },
    { "on",           ON },
    { "open",         OPEN },
    { "party",        PARTY },
    { "pdf",          PDF },
    { "pics",         PICS },
    { "ppt",          PPT },
    { "presentation", PRESENTATION },
    { "property",     PROPERTY },
    { "quit",         HALT },      /* re-use of byacc token */
    { "remove",       REMOVE },
    { "root",         ROOT },
    { "save",         SAVE },
    { "size",         SIZE },
    { "sleep",        SLEEP },
    { "slide",        SLIDE },
    { "source",       SRC },
    { "src",          SRC },
    { "start",        START },
    { "template",     TEMPLATE },
    { "templates",    TEMPLATES },
    { "third",        THIRD },
    { "title",        TITLE },
    { "yes",          YES },
};


/* Returns TRUE if non-empty keywds array is sorted ascending */
int
lexer_configured_correctly(void)
{
    int i, nelem;

    if ((sizeof(keywds) == 0) || (sizeof(keywds[0]) == 0))
        return (FALSE);        /* something is dreadfully wrong */

    nelem = sizeof(keywds) / sizeof(keywds[0]);
    if (nelem < 2)
        return (TRUE);         /* a lexer with one keyword...right */

    /* precondition:  keyword array contains at least 2 elements */
    for (i = 0; i < nelem - 1; i++)
    {
        if (strcmp(keywds[i].id, keywds[i + 1].id) > 0)
            return (FALSE);
    }
    return(TRUE);
}

static int
keywd_bsearch_cmp(const void *key, const void *datum)
{
    return (strcmp((const char *)key, ((const KYWD *) datum)->id));
}

static int fakednl, lastch, tested_bom;

/*
 * There's a nasty design flaw associated with defining a grammar that
 * terminates its productions with '\n'.  The flaw is that some text
 * editors (cough, notepad, cough) don't always terminate the last line of
 * a file with '\n' (see also Emacs).
 *
 * Consequently, an innocent script like this:
 *
 *    sleep 100<eof>
 *
 * will generate a syntax error from the parser (no terminating \n) unless
 * workarounds like the following hack ride to the rescue.  Note that
 * myinput() is a slightly modifid copy of the flex macro YY_INPUT().
 *
 * 9/26/2015
 * =========
 * Flush an input file's UTF8 byte order marker (BOM) so that otherwise
 * properly formed input files don't generate spurious syntax errors.
 */
static void
myinput(char *buf, int *result, int max_size)
{
    if ( YY_CURRENT_BUFFER_LVALUE->yy_is_interactive )
    {
        int c = '*', n;
        for ( n = 0; n < max_size &&
                 (c = getc( yyin )) != EOF && c != '\n'; ++n )
            buf[n] = (char) c;
        if ( c == '\n' )
            buf[n++] = (char) c;
        if ( c == EOF && ferror( yyin ) )
            yy_fatal_error( "input in flex scanner failed" );
        *result = n;
    }
    else
    {
        if (fakednl)
        {
            reset_lex_input_state();
            *result = YY_NULL;
        }
        else
        {
            int n;

            errno = 0;
            while ((n = fread(buf, 1, max_size, yyin)) == 0 && ferror(yyin))
            {
                if (errno != EINTR)
                {
                    yy_fatal_error( "input in flex scanner failed" );
                    reset_lex_input_state();
                    break;
                }
                errno = 0;
                clearerr(yyin);
            }
            if (n == 0 && lastch != '\n' && (! ferror(yyin)))
            {
                buf[0]  = '\n';
                n       = 1;
                fakednl = TRUE;
            }
            else if (n > 0)
                lastch = buf[n - 1];
            *result = n;

            if (n == 0)
            {
                /* EOF ... reset BOM test for next input file */

                tested_bom = 0;
            }
            else if (! tested_bom)
            {
                /* BOF ... elide UTF-8 BOM if appropriate */

                if (n >= 3)
                {
                    if (buf[0] == '\xef' && buf[1] == '\xbb' && buf[2]== '\xbf')
                    {
                        /* turn BOM into whitespace, which FLEX will ignore */

                        buf[0] = buf[1] = buf[2] = ' ';
                    }
                }
                tested_bom = 1;   /* BOM only occurs at BOF--no more testing */
            }
        }
    }
}

/*
 * If a script is structured like so:
 *
 *    halt<EOF>
 *
 * i.e., no EOL on last line of input, the lexer won't be called because
 * yyparse() will close up shop when it sees the <HALT> token (i.e.,
 * yyparse() is not going to reduce <EOF> via a call to myinput().
 * That sucks a lot if there are more scripts on the command line that need
 * parsing, 'cause myinput()'s global/static state vars won't be reset and
 * so myinput will return an immediate <EOF>.
 *
 * Oh what tangled webs we weave...
 */
void
reset_lex_input_state(void)
{
    fakednl    = FALSE;
    lastch     = 0;
    tested_bom = 0;
}

#define YY_INPUT(buf,result,max_size)  myinput(buf, &result, max_size)

/*
 * Flex generates code that calls fileno().  DevStudio prefers _fileno() .
 * Make DevStudio happy.
 */
#define fileno _fileno

%}

%x FNAME DUP_TMPLT PICREF_ARG FPATH

cleaned   \<cleaned\>
number     -?[0-9]+
keyword    [a-z]+
qstr1      \"([^"\\\n]|\\.)*["\n]
qstr2      '([^'\\\n]|\\.)*['\n]
ws         [ \t]+

%%

#.*\n                { return('\n'); }
{ws}                 ;
,                    { return(','); }    /* comma as punctuation */

{qstr1}|{qstr2}      { return (process_string()); }
"4:3"                { return (RECTANGULAR); }
"16:9"               { return (WIDESCREEN); }
{number}             { return (process_number(yytext)); }

cap{number}          {
                       int tokval = P3ICLI_ERR_TOK;

                       if (process_number(yytext + sizeof("cap") - 1) == NUMBER)
                       {
                           /*
                            * cap{number} must be followed by a qstring
                            * or "<cleaned>".  Either of which must be
                            * delimited by whitespace.
                            */

                           int ch = input();

                           if (isspace(ch))
                               tokval = CAPREF;
                           unput(ch);
                       }
                       return (tokval);
                     }
pic{number}          {
                       int tokval = P3ICLI_ERR_TOK;

                       if (process_number(yytext + sizeof("pic") - 1) == NUMBER)
                       {
                           /*
                            * pic{number} must be followed by an unquoted
                            * filename, the keyword "size" (sans quotes), or
                            * <cleaned> (each of which must be delimited
                            * by whitespace.)
                            */

                           int ch = input();

                           if (isspace(ch))
                           {
                               tokval = PICREF;
                               BEGIN PICREF_ARG;
                           }
                           unput(ch);
                       }
                       return (tokval);
                     }
a4                   { return (A4); }
utf8                 { return (UTF8); }
{keyword}            {
                       int  ch, tokval = P3ICLI_ERR_TOK,  /* assumption */
                            count = sizeof(keywds) / sizeof(keywds[0]);
                       KYWD *pkeywd;

                       pkeywd = (KYWD *)bsearch(
                                       yytext,
                                       keywds,
                                       count,
                                       sizeof(keywds[0]),
                                       keywd_bsearch_cmp
                                               );
                       if (pkeywd)
                       {
                           tokval = pkeywd->val;
                           switch (tokval)
                           {
                               case TEMPLATE:
                                   /*
                                    * "template", when not used in the
                                    * context of the "duplicate template"
                                    * grammar production, has special
                                    * processing needs, namely:
                                    *
                                    *   it must be followed by an unquoted
                                    *   filename, which should be
                                    *   delimited by whitespace.
                                    *
                                    * FALL THRU
                                    */
                               case HTML:
                               case PDF:
                               case PRESENTATION:
                               case IGNORE:
                                   /*
                                    * these tokens also must be followed
                                    * by an unquoted filename, which must
                                    * be delimited by whitespace.
                                    */

                                   ch = input();
                                   if (isspace(ch))
                                       BEGIN FNAME;
                                   else
                                       tokval = P3ICLI_ERR_TOK;
                                   unput(ch);
                                   break;
                               case DUPLICATE:
                                   BEGIN DUP_TMPLT;
                                   break;
                               case ROOT:
                                   /*
                                    * this token must be followed by an
                                    * unquoted folder path, which must be
                                    * delimited by whitespace.
                                    */

                                   ch = input();
                                   if (isspace(ch))
                                       BEGIN FPATH;
                                   else
                                       tokval = P3ICLI_ERR_TOK;
                                   unput(ch);
                                   break;
                               default:
                                   break;
                           }
                       }
                       return (tokval);
                     }
{cleaned}            { return(CLEANED); }

\n                   { return ('\n'); }
.                    {
                       if (yytext[0] & 0x80)
                       {
                           /*
                            * When an unrecognized char in the input stream has
                            * high-order bit set, warn the user (unicode?).
                            */

                           static int warn_once = 0;
                           if (warn_once == 0)
                           {
                               warning_msg(
                           "detected non-token char with high order bit set",
                                       0
                                          );
                               warn_once = 1;
                           }

                           /*
                            * Returning a token with the high-order bit set
                            * will cause yyparse() to assume EOF on the
                            * input stream...and then P3ICLI abruptly
                            * exits.  Unfriendly :-) .
                            */
                           return (P3ICLI_ERR_TOK);
                       }
                       else
                       {
                           /* support single char grammar tokens (e.g., '=') */

                           return (yytext[0]);
                       }
                     }

<FNAME>[^#\n]*       {
                       BEGIN 0;
                       yylval.str = xstrdup(trim(yytext));
                       return (strlen(yylval.str) ? FILENAME : P3ICLI_ERR_TOK);
                     }
<FNAME>(.|\n)        { BEGIN 0; return (yytext[0]); }


<FPATH>[^#\n]*       {
                       BEGIN 0;
                       yylval.str = xstrdup(trim(yytext));
                       return (strlen(yylval.str) ? FOLDER : P3ICLI_ERR_TOK);
                     }
<FPATH>(.|\n)        { BEGIN 0; return (yytext[0]); }

                     /*
                      * The DUP_TMPLT hack exists because the command
                      * "duplicate template" is a production of the grammar
                      * where the token TEMPLATE is NOT followed by a FILENAME.
                      */
<DUP_TMPLT>template  { BEGIN 0; return (TEMPLATE); }
<DUP_TMPLT>{ws}      ;
<DUP_TMPLT>(.|\n)    { BEGIN 0; return (yytext[0]); }

<PICREF_ARG>[^#\n]*  { BEGIN 0; return (picref_lookahead()); }
<PICREF_ARG>(.|\n)   { BEGIN 0; return (yytext[0]); }

%%

int yywrap() { return (1); }

static int
process_number(char *tokstr)
{
    long rslt;
    int  rc;

    errno = 0;
    rslt  = strtol(tokstr, NULL, 10);
    if (errno == EDOM || errno == ERANGE)
    {
        rc = P3ICLI_ERR_TOK;
        syntax_error("invalid numerical value", errno);
    }
    else
    {
        rc         = NUMBER;
        yylval.val = rslt;
    }
    return (rc);
}

static int
process_string(void)
{
    char *dst, *cp, *base, msg[128];

    int  delim    = yytext[0];
    char *plastch = yytext + yyleng - 1;

    if (*plastch != delim)
    {
        syntax_error("unterminated string detected", 0);
        return (*plastch);
    }
    *plastch = '\0';          /* clip closing delim */
    cp       = yytext + 1;    /* and opening delim  */
    base     = dst = xmalloc(yyleng + 1);

    /* translate escaped characters */
    while (*cp)
    {
        if (*cp == '\\')
        {
            switch (*++cp)
            {
                case 'r':
                    *cp = '\r';
                    break;
                case '\\':
                    *cp = '\\';
                    break;
                case 'n':
                    *cp = '\n';
                    break;
                case 't':
                    *cp = '\t';
                    break;
                case '\'':
                    *cp = '\'';
                    break;
                case '"':
                    *cp = '"';
                    break;
                default:
                    _snprintf(msg,
                              sizeof(msg),
                              "unsupported string escape code: \\%c",
                              (*cp) ? *cp : '0');
                    syntax_error(msg, 0);
                    *dst++ = '\\';   /* leave bogus esc intact */
                    break;
            }
        }
        *dst++ = *cp++;
    }
    *dst       = '\0';
    yylval.str = base;
    return (QSTRING);
}

/*
 * precondition:  1) lexer has recognized pic{number}{ws} and the {ws}
 *                   char was pushed back.
                  2) The input stream consumed by the lex state
 *                   <PICREF_ARG> is stored in yytext.
 *
 * goal:          disambiguate these non-context free grammar productions:
 *
 *                pic{number} <cleaned>                   TOKEN => FILENAME
 *                pic{number} some_unquoted_file_path     TOKEN => FILENAME
 *                pic{number} size {number},{number}      TOKEN => PICREF_SIZE
 *                pic{number} move {number},{number}      TOKEN => PICREF_MOVE
 *
 * After reading the code below, you'll appreciate why context free
 * grammars are the only way to go.
 */
static int
picref_lookahead(void)
{
#define SIZE_TOK   ("size")
#define SIZE_LEN   (sizeof(SIZE_TOK))
#define MOVE_TOK   ("move")
#define MOVE_LEN   (sizeof(SIZE_TOK))

    int  j;
    int  is_size_cmd;
    char *cp, *base, numbuf[32];

    /* strip leading and trailing whitespace */
    cp = base = trim(yytext);
    if (*cp == '\0')
    {
        /* pic{number} followed by no meaningful token */

        return (P3ICLI_ERR_TOK);
    }

    /* What grammer production is this?  "pic{ui} {size|move}"   or neither? */
    if (!  (*cp == SIZE_TOK[0] &&
            cp[1] && cp[1] == SIZE_TOK[1] &&
            cp[2] && cp[2] == SIZE_TOK[2] &&
            cp[3] && cp[3] == SIZE_TOK[3] &&
            cp[4] && isspace(cp[4])))
    {
        /* not "size" ... maybe "move" ? */

        if (!  (*cp == MOVE_TOK[0] &&
                cp[1] && cp[1] == MOVE_TOK[1] &&
                cp[2] && cp[2] == MOVE_TOK[2] &&
                cp[3] && cp[3] == MOVE_TOK[3] &&
                cp[4] && isspace(cp[4])))
        {
            /* neither */

            return (make_filename_token(base));
        }
        else
        {
            cp += MOVE_LEN;
            is_size_cmd = 0;
        }
    }
    else
    {
        cp += SIZE_LEN;
        is_size_cmd = 1;
    }

    /* skip all other ws following {size|move} */
    while (isspace(*cp))
        cp++;

    if (! ((isdigit(*cp) || (*cp == '-' && isdigit(cp[1]))) &&
                                                    (strchr(cp, ',') != NULL)))
    {
        /* not:  {size|move} {number},{number} */

        return (make_filename_token(base));
    }

    j = 0;
    if (*cp == '-')
    {
        /* a negative {number} makes sense if a shape is rotated. */

        numbuf[j++] = *cp++;
    }
    numbuf[j++] = *cp++;

    /* consume 1st geometry value following {size|move} */
    while (isdigit(*cp))
    {
        if (j >= sizeof(numbuf))
        {
            /* Not a credible number representing a shape's geometry... */

            return (make_filename_token(base));
        }
        numbuf[j++] = *cp++;
    }
    numbuf[j] = '\0';
    if (convert_number(numbuf, TRUE, &yylval.nums[0]) == P3ICLI_ERR_TOK)
    {
        /* Not a credible number representing a shape's geometry... */

        return (make_filename_token(base));
    }

    /* one geometry value down, one to go */

    while (isspace(*cp))
        cp++;
    if (*cp++ != ',')
        return (make_filename_token(base));

    while (isspace(*cp))
        cp++;

    if (! (isdigit(*cp) || (*cp == '-' && isdigit(cp[1]))))
        return (make_filename_token(base));
    j = 0;
    if (*cp == '-')
    {
        /* a negative {number} makes sense if a shape is rotated. */

        numbuf[j++] = *cp++;
    }
    numbuf[j++] = *cp++;

    /* consume 2nd geometry value following "," */
    while (isdigit(*cp))
    {
        if (j >= sizeof(numbuf))
        {
            /* Not a credible number representing a shape's geometry... */

            return (make_filename_token(base));
        }
        numbuf[j++] = *cp++;
    }
    numbuf[j] = '\0';
    if (convert_number(numbuf, TRUE, &yylval.nums[1]) == P3ICLI_ERR_TOK)
    {
        /* Not a credible number representing a shape's geometry... */

        return (make_filename_token(base));
    }

    /* Anything left over is garbage ... */
    if (*cp)
    {
        char msg[128];

        _snprintf(msg,
                  sizeof(msg),
                  "pic<ui> %s <ui>,<ui> <garbage>",
                  ((is_size_cmd) ? SIZE_TOK : MOVE_TOK));

        syntax_error(msg, 0);
        return (P3ICLI_ERR_TOK);
    }

    /* Return an appropriate token to the parser */
    return ((is_size_cmd) ? PICREF_SIZE : PICREF_MOVE);

#undef MOVE_LEN
#undef MOVE_TOK
#undef SIZE_LEN
#undef SIZE_TOK
}

/* precondition:  single argument has been trim() 'd */
static int
make_filename_token(char *buf)
{
    char *token;

    token = xstrdup(buf);
    yylval.str = token;
    return (FILENAME);
}

/*
 * Similar to process_number(), except:
 *
 * 1) results are returned by reference,
 * 2) conversion errors may be suppressed
 */
static int
convert_number(char *tokstr, int suppress, long *rslt)
{
    int  rc = NUMBER;    /* an assumption */

    errno = 0;
    *rslt = strtol(tokstr, NULL, 10);
    if (errno == EDOM || errno == ERANGE)
    {
        rc = P3ICLI_ERR_TOK;
        if (! suppress)
            syntax_error("invalid numerical value", errno);
    }
    return (rc);
}
