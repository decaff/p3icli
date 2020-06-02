%{

/*
 * MODULE
 *    gram.y - p3icli's command file grammar
 *
 */

#include <io.h>

#include "cdefs.h"

#pragma warning(disable: 4102)   /* kill unreferenced label warnings */

#define MAX_SLEEP          30000     /* msec */

static P3ICLI_CMD_DATA cmd;
int                    input_isatty = -1;
long                   lineno = 1;


static void            cmd_clean(void);
static int             dummy(P3ICLI_CMD_DATA *);
static int             halt(P3ICLI_CMD_DATA *);

%}

%union
{
    char          *str;
    long          val;
    int           tag;
    unsigned long uval;
    long          nums[2];
}

%token <val> AS CAPREF CAPS CLEAN CLEANED CMTS DISCARD DUPLICATE FROM HALT
%token <val> HTML INSERT KILL MINIMIZED NUMBER OPEN PICREF PICS PPT
%token <val> PRESENTATION REMOVE SLEEP SAVE SLIDE START TEMPLATE TITLE
%token <val> COPY SRC FMT ON OFF GEOMETRIES LIST DEFAULT RECTANGULAR PDF
%token <val> CUSTOM PROPERTY YES NO THIRD PARTY FIX UTF8 ANSI ENCODING
%token <val> SIZE MOVE WIDESCREEN A4 DELETE IMAGE FILES DIF IGNORE
%token <val> TEMPLATES ROOT

%type  <val> start_pptarg

%type  <tag> slide_type

%token <str> FILENAME QSTRING FOLDER

%token <nums> PICREF_SIZE PICREF_MOVE

%%

grammar : cmdlist;

cmdlist : /* Empty -- handles EOF */
        | cmdlist cmd '\n'      {   /* Reduced command, execute it. */

                                    if (exec_semantics(&cmd) == P3ICLI_STOP)
                                        return (0);   /* that's all, folks */
                                    cmd_clean();
                                    stdin_prompt();
                                    lineno++;
                                }
        | error       '\n'      {
                                    yyerrok;
                                    cmd_clean();
                                    stdin_prompt();
                                    lineno++;
                                }
        ;

cmd     : /* ignore empty commands */ { cmd.fn = dummy; }
        | HALT                        { cmd.fn = halt;  }
        | INSERT SLIDE slide_type
            FROM TEMPLATE FILENAME    {
                                        if ($3 == P3ICLI_BOGUS_SLIDE)
                                            cmd.fn = dummy;
                                        else
                                            cmd.fn = insert_tmplt_slide;

                                        /*
                                         * subtle:  even if error occurred,
                                         * "remember" filename so it's free'd
                                         */
                                        cmd.u1.filename = $6;
                                      }
        | START PPT start_pptarg      {
                                        cmd.fn       = start_ppt;
                                        cmd.long_val = $3;
                                      }
        | DUPLICATE TEMPLATE          { cmd.fn = duplicate_tmplt; }
        | CLEAN cleanarg              { cmd.fn = tidy_tmplt; }
        | KILL PPT killarg            { cmd.fn = kill_ppt; }
        | OPEN  openarg
        | SAVE AS save_as_arg FILENAME {
                                        cmd.fn          = save_as;
                                        cmd.u1.filename = $4;
                                       }
        | CAPREF capref_arg           {
                                        if ($1 < 1 || $1 > P3ICLI_MAX_CAP)
                                        {
                                            syntax_error(
                                                "cap reference out of range",
                                                           0);
                                            cmd.fn = dummy;
                                        }
                                        else
                                        {
                                            /*
                                             * so far, so good.  save away
                                             * the user's selected cap # .
                                             */

                                            cmd.long_val = $1;
                                        }
                                      }
        | PICREF picref_arg           {
                                        if ($1 < 1 || $1 > P3ICLI_MAX_PIC)
                                        {
                                            syntax_error(
                                                "pic reference out of range",
                                                           0);
                                            cmd.fn = dummy;
                                        }
                                        else
                                        {
                                            /*
                                             * so far, so good.  save away
                                             * the user's selected pic # .
                                             */

                                            cmd.long_val = $1;
                                        }
                                      }
        | SLEEP NUMBER                {
                                        if ($2 < 0 || $2 > MAX_SLEEP)
                                        {
                                            syntax_error(
                                                "sleep argument out of range",
                                                         0
                                                        );
                                            cmd.fn = dummy;
                                        }
                                        else
                                        {
                                            cmd.fn       = script_pause;
                                            cmd.long_val = $2;
                                        }
                                      }
        | TITLE title_arg
        | REMOVE CMTS                 { cmd.fn = remove_comments; }
        | COPY SRC FMT on_off_arg     { cmd.fn = copy_src_fmt; }
        | LIST GEOMETRIES list_arg    { cmd.fn = list_geometries; }
        | SLIDE SIZE slide_size_arg   {
                                        cmd.fn =
                                            (cmd.tag != P3ICLI_SLIDE_SIZE_ERR)
                                            ? set_slide_size : dummy;
                                      }
        | CUSTOM PROPERTY QSTRING '=' custom_prop_arg
                                      {
                                        cmd.fn         = set_custom_property;
                                        cmd.u1.str_val = $3;
                                      }
        | THIRD PARTY FIX on_off_arg  { cmd.fn = third_party_fix; }
        | ENCODING encoding_arg       { cmd.fn = encoding; }
        | del_image_files on_off_arg  { cmd.fn = delete_image_files; }
        | IGNORE FILENAME             {
                                        cmd.fn          = ignore_image_file;
                                        cmd.u1.filename = $2;
                                      }
        | PICS ROOT FOLDER            {
                                        cmd.fn          = set_pics_root_path;
                                        cmd.u1.filename = $3;
                                      }
        | TEMPLATES ROOT FOLDER       {
                                        cmd.fn          = set_tmplts_root_path;
                                        cmd.u1.filename = $3;
                                      }
        ;

killarg : SAVE                        { cmd.long_val = TRUE; }
        | DISCARD                     { cmd.long_val = FALSE; }
        ;

cleanarg : SLIDE                      { cmd.long_val = P3ICLI_CLEAN_SLIDE; }
         | PICS                       { cmd.long_val = P3ICLI_CLEAN_PICS; }
         | CAPS                       { cmd.long_val = P3ICLI_CLEAN_CAPS; }
         ;

start_pptarg : /* optional */         { $$ = P3ICLI_START_NORMAL; }
             | MINIMIZED              { $$ = P3ICLI_START_MINIMIZED; }
             ;

save_as_arg : HTML                    { cmd.long_val = P3ICLI_HTML; }
            | PRESENTATION            { cmd.long_val = P3ICLI_PRESENTATION; }
            | PDF                     { cmd.long_val = P3ICLI_PDF; }
            ;

openarg : TEMPLATE FILENAME           {
                                        cmd.fn          = open_tmplt;
                                        cmd.u1.filename = $2;
                                      }
        ;

slide_type : QSTRING                  {
                                        cmd.u2.slidename = $1;
                                        $$ = cmd.tag     = P3ICLI_NAMED_SLIDE;
                                      }
           | NUMBER                   {
                                        if ($1 < 1)
                                        {
                                            syntax_error(
                                                "slide number must be > 0",
                                                         0);
                                            cmd.tag = P3ICLI_BOGUS_SLIDE;
                                        }
                                        else
                                        {
                                            cmd.tag      = P3ICLI_NUMERIC_SLIDE;
                                            cmd.long_val = $1;
                                        }
                                        $$ = cmd.tag;
                                      }
           ;

capref_arg : QSTRING                  {
                                        cmd.fn         = set_caption;
                                        cmd.u1.caption = $1;
                                      }
           | CLEANED                  {
                                        cmd.fn         = set_caption;
                                        cmd.u1.caption =
                                                     xstrdup(P3ICLI_PROTECTED);
                                      }
           | MOVE NUMBER ',' NUMBER   {
                                        cmd.fn      = set_cap_geometry;
                                        cmd.nums[0] = $2;
                                        cmd.nums[1] = $4;
                                        cmd.tag     = P3ICLI_MOVE_SHAPE;
                                      }
           | SIZE NUMBER ',' NUMBER   {
                                        cmd.fn      = set_cap_geometry;
                                        cmd.nums[0] = $2;
                                        cmd.nums[1] = $4;
                                        cmd.tag     = P3ICLI_CHG_SHAPE_SIZE;
                                      }
           ;

on_off_arg : ON                       { cmd.long_val = TRUE; }
           | OFF                      { cmd.long_val = FALSE; }
           ;

picref_arg : FILENAME                 {
                                        /*
                                         * lex.l function picref_lookahead()
                                         * explains how this grammar
                                         * sentence is recognized.
                                         */
                                        cmd.fn          = insert_pic;
                                        cmd.u1.filename = $1;
                                      }
           | PICREF_SIZE              {
                                        /* again, consult  picref_lookahead() */

                                        cmd.fn      = set_pic_geometry;
                                        cmd.nums[0] = $1[0];
                                        cmd.nums[1] = $1[1];
                                        cmd.tag     = P3ICLI_CHG_SHAPE_SIZE;
                                      }
           | PICREF_MOVE              {
                                        /* again, consult  picref_lookahead() */

                                        cmd.fn      = set_pic_geometry;
                                        cmd.nums[0] = $1[0];
                                        cmd.nums[1] = $1[1];
                                        cmd.tag     = P3ICLI_MOVE_SHAPE;
                                      }
           ;

title_arg : QSTRING                   { cmd.fn = set_title; cmd.u1.title = $1; }
          | MOVE NUMBER ',' NUMBER    {
                                        cmd.fn      = set_title_geometry;
                                        cmd.nums[0] = $2;
                                        cmd.nums[1] = $4;
                                        cmd.tag     = P3ICLI_MOVE_SHAPE;
                                      }
          | SIZE NUMBER ',' NUMBER    {
                                        cmd.fn      = set_title_geometry;
                                        cmd.nums[0] = $2;
                                        cmd.nums[1] = $4;
                                        cmd.tag     = P3ICLI_CHG_SHAPE_SIZE;
                                      }
          ;

list_arg :                            {
                                        /* output title is optional */

                                        cmd.u1.str_val = NULL;
                                      }
         | QSTRING                    {
                                        /*
                                         * User wants to add a title to
                                         * the output listing.
                                         */

                                        cmd.u1.str_val = $1;
                                      }
         ;

slide_size_arg : DEFAULT              { cmd.tag = P3ICLI_SLIDE_SIZE_DFLT; }
               | RECTANGULAR          { cmd.tag = P3ICLI_SLIDE_SIZE_4_3;  }
               | WIDESCREEN           { cmd.tag = P3ICLI_SLIDE_SIZE_16_9; }
               | A4                   { cmd.tag = P3ICLI_SLIDE_SIZE_A4;   }
               | NUMBER ',' NUMBER    {
                                        if ($1 < 0 || $3 < 0)
                                        {
                                            syntax_error(
                                            "slide size argument must be >= 0",
                                                         0
                                                        );
                                            cmd.tag = P3ICLI_SLIDE_SIZE_ERR;
                                        }
                                        else
                                        {
                                            cmd.tag     =
                                                        P3ICLI_SLIDE_SIZE_CUST;
                                            cmd.nums[0] = $1;
                                            cmd.nums[1] = $3;
                                        }
                                      }
               ;

custom_prop_arg : QSTRING             {
                                        cmd.tag        = P3ICLI_QSTRING_ARG;
                                        cmd.u2.str_val = $1;
                                      }
                | NUMBER              {
                                        cmd.tag        = P3ICLI_NUMBER_ARG;
                                        cmd.long_val   = $1;
                                      }
                | yes_no_arg          { cmd.tag        = P3ICLI_YES_NO_ARG; }
                ;

yes_no_arg : YES                      { cmd.long_val = TRUE;  }
           | NO                       { cmd.long_val = FALSE; }
           ;

encoding_arg : UTF8                   { cmd.long_val = P3ICLI_UTF8_ARG; }
             | ANSI                   { cmd.long_val = P3ICLI_ANSI_ARG; }
             ;

del_image_files : DELETE IMAGE FILES
                | DIF
                ;

%%

static int
dummy(P3ICLI_CMD_DATA *unused)
{
    return (P3ICLI_CONTINUE);
}



/* Custom version of yyerror. */
void
yyerror(char *errmsg)
{
    if (YYRECOVERING())
    {
        /* Yacc parser is recovering from error, don't complain. */

        return;
    }
    syntax_error(errmsg, 0);
}



/* Free any strings consumed by reduced sentences. */
static void
cmd_clean(void)
{
    if (cmd.u1.str_val)
    {
        (void) free(cmd.u1.str_val);
        cmd.u1.str_val = NULL;
    }
    if (cmd.u2.str_val)
    {
        (void) free(cmd.u2.str_val);
        cmd.u2.str_val = NULL;
    }
}



/* Trivial command function -- return value that forces parser exit. */
static int
halt(P3ICLI_CMD_DATA *unused)
{
    return (P3ICLI_STOP);
}



/*
 * FUNCTION
 *   stdin_prompt(void)
 *
 * DESCRIPTION
 *   Emits a prompt if lexer's input stream (yyin) is attached to a tty.
 *
 * RETURNS
 *   None.
 */

void
stdin_prompt(void)
{
    if (input_isatty == -1)
        input_isatty = _isatty(_fileno(yyin));

    if (input_isatty)
    {
        fputs("> ", stdout);
        fflush(stdout);
    }
}

/*
 * When switching the scanner's input sources (files, devices, etc.),
 * reset the state that tests whether or not a prompt is required.
 */
void
reset_parser_prompt_state(void)
{
    input_isatty = -1;
}
