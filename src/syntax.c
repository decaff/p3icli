/*
 * syntax.c -- trivial module to emit (on stdout) the syntax accepted by P3ICLI
 *
 */

#include <stdio.h>

#include "cdefs.h"

#ifdef __cplusplus
extern "C" {
#endif

void
emit_accepted_syntax(void)
{
    fputs("<uint>     ::= unsigned integer\n", stdout);
    fputs("<int>      ::= integer, optionally preceded with '-'\n", stdout);
    fputs("<filename> ::= unquoted string specifying a file path\n", stdout);
    fputs("<folder>   ::= unquoted string specifying a folder path\n", stdout);
    fputs("<qstring>  ::= quoted string\n", stdout);
    fputs("[element]  ::= element is optional\n", stdout);
    fputs("'char'     ::= literal char\n\n", stdout);

    fputs("cap<uint> <qstring>\n", stdout);
    fputs("cap<uint> '<'cleaned'>'\n", stdout);
    fputs("cap<uint> move <int>,<int>\n", stdout);
    fputs("cap<uint> size <uint>,<uint>\n", stdout);
    fputs("clean {slide | pics | caps}\n", stdout);
    fputs("copy src fmt {on | off}\n", stdout);
    fputs("copy source format {on | off}\n", stdout);
    fputs("custom property <qstring>=<qstring>\n", stdout);
    fputs("custom property <qstring>={yes | no}\n", stdout);
    fputs("custom property <qstring>=<int>\n", stdout);
    fputs("{delete image files | dif} {on | off}\n", stdout);
    fputs("{dup | duplicate} template\n", stdout);
    fputs("encoding {ansi | utf8}\n", stdout);
    fputs("{exit | halt | quit}\n", stdout);
    fputs("ignore <filename>\n", stdout);
    fputs("insert slide <uint> from template <filename>\n", stdout);
    fputs("insert slide <qstring> from template <filename>\n", stdout);
    fputs("kill ppt {save | discard}\n", stdout);
    fputs("list geometries [<qstring>]\n", stdout);
    fputs("open template <filename>\n", stdout);
    fputs("pic<uint> <filename>\n", stdout);
    fputs("pic<uint> '<'cleaned'>'\n", stdout);
    fputs("pic<uint> move <int>,<int>\n", stdout);
    fputs("pic<uint> size <uint>,<uint>\n", stdout);
    fputs("pics root {<folder>|'<'none'>'} \n", stdout);
    fputs("remove comments\n", stdout);
    fputs("save as {html | pdf | presentation} <filename>\n", stdout);
    fputs("sleep <uint>\n", stdout);
    fputs("slide size {default | a4 | 4:3 | 16:9 | <uint>,<uint>} \n", stdout);
    fputs("start ppt [minimized]\n", stdout);
    fputs("templates root {<folder>|'<'none'>'} \n", stdout);
    fputs("third party fix {on | off}\n", stdout);
    fputs("title <qstring>\n", stdout);
    fputs("title move <int>,<int>\n", stdout);
    fputs("title size <uint>,<uint>\n", stdout);

    fputs("\nEnv Var Names\n", stdout);
    fputs("-------------\n", stdout);
    emit_env_var_names(stdout);
}

#ifdef __cplusplus
}   /* end extern "C"  */
#endif
