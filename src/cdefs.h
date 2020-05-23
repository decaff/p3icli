/*
 * cdefs.h -- common symbols, types, externs (in a C context)
 *
 */

#ifndef CDEFS_H
#define CDEFS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

/* --------------------------- macros ----------------------------- */

#ifndef FALSE
    #define FALSE            0
#endif
#ifndef TRUE
    #define TRUE             1
#endif

#define P3ICLI_NUMBER_ARG       0       /* grammar command tag */
#define P3ICLI_QSTRING_ARG      1       /* grammar command tag */
#define P3ICLI_YES_NO_ARG       2       /* grammar command tag */

#define P3ICLI_CONTINUE         1
#define P3ICLI_MAX_CAP         20       /* max captions on a single slide */
#define P3ICLI_MAX_PIC         20       /* max pics on a single slide     */
#define P3ICLI_MAX_SCRIPT_ERRS  8       /* after this many errors in a script,
                                         * exit program.
                                         */
#define P3ICLI_CAP_MODSTR       " modified"
#define P3ICLI_CAPREF           "cap"
#define P3ICLI_PIC_MODSTR       " modified"
#define P3ICLI_PICREF           "pic"
#define P3ICLI_PROTECTED        "<cleaned>"
#define P3ICLI_STOP             0
#define P3ICLI_TITLE            "title"
#define P3ICLI_TITLE_MODIFIED   "title modified"

#define P3ICLI_BOGUS_SLIDE      0
#define P3ICLI_NAMED_SLIDE      1
#define P3ICLI_NUMERIC_SLIDE    2

#define P3ICLI_CLEAN_CAPS       0
#define P3ICLI_CLEAN_PICS       1
#define P3ICLI_CLEAN_SLIDE      2

#define P3ICLI_SLIDE_SIZE_4_3   0    /* aspect ratio => 4:3                 */
#define P3ICLI_SLIDE_SIZE_DFLT  1    /* aspect ratio => PPT default setting */
#define P3ICLI_SLIDE_SIZE_16_9  2    /* aspect ratio => 16:9                */
#define P3ICLI_SLIDE_SIZE_A4    3    /* 210 x 297 mm or 7.5in x 10.833in    */
#define P3ICLI_SLIDE_SIZE_CUST  4    /* user-specified geom, in points      */
#define P3ICLI_SLIDE_SIZE_ERR   5    /* user-specified geom is invalid      */

#define P3ICLI_ANSI_ARG         0
#define P3ICLI_UTF8_ARG         1

/* Distinguish the myriad Move/Size commands...either moving or resizing */
#define P3ICLI_CHG_SHAPE_SIZE   (TRUE)
#define P3ICLI_MOVE_SHAPE       (FALSE)

/* Distinguish listing cap shapes or pic shapes */
#define P3ICLI_LIST_CAPS        (FALSE)
#define P3ICLI_LIST_PICS        (TRUE)

#ifndef max
    #define max(a,b)        (a > b) ? (a) : (b)
#endif

/* --------------------------- types ------------------------------ */

typedef int (*P3ICLI_CMD_FN)(struct p3i_cmd_data_struct *);

typedef struct p3i_cmd_data_struct
{
    P3ICLI_CMD_FN  fn;       /* Grammar calls this function to execute
                              * a command (such as "halt").  "fn" returns
                              * either P3ICLI_CONTINUE or P3ICLI_QUIT--former
                              * implies okay to parse next input command.
                              */
    union
    {
        char    *str_val;    /* generic value access */
        char    *filename;
        char    *title;
        char    *caption;
    } u1;                    /* string argument that a called function
                              * _may_ require.
                              */

    union
    {
        char    *str_val;    /* generic value access */
        char    *slidename;
    } u2;                    /* some functions need two string args */

    long        long_val;    /* principal numerical argument that a called
                              * function _may_ require.
                              */

    long        nums[2];     /* other numerical arguments that a called
                              * function _may_ require.
                              */

    int         tag;         /* distinguish similar commands */
} P3ICLI_CMD_DATA;

typedef enum { P3ICLI_IF_NOT_FILE_WARN, P3ICLI_IF_NOT_FILE_ERR }
                                                           P3ICLI_FILE_STATUS;

// Many of the following magic enum numbers are extracted from the
// PPT9.0 type library
typedef enum { P3ICLI_HTML = 12,
               P3ICLI_PRESENTATION = 1,
               P3ICLI_PPTX_PRES = 24,     // ppSaveAsOpenXMLPresentation
               P3ICLI_PDF = 32 } P3CLI_SAVE_AS;
typedef enum { P3ICLI_START_NORMAL    = 1,
               P3ICLI_START_MINIMIZED = 2} P3ICLI_START_STATE ;


/* --------------------------- externs ---------------------------- */

extern long          lineno;    /* current script line#, N/A if reading from
                                 * stdin
                                 */
extern char          *progname;
extern FILE          *yyin;


extern void          add_log_timestamp(const char *msg);
extern unsigned long atoul(const char *str, int base, int *valid);
extern void          binary_backoff_wait(unsigned long *msecs, const char *tag);
extern void          emit_accepted_syntax(void);
extern void          emit_env_var_names(FILE *);
extern int           exec_semantics(P3ICLI_CMD_DATA *);
extern int           grab_bool_val_from_env_var(const char *varname, int *bval);
extern int           grab_numeric_val_from_env_var(
                                      const char    *varname,
                                      unsigned long minvalue,
                                      unsigned long maxvalue,
                                      unsigned long *result
                                                  );
extern int           is_a_file(const char *, P3ICLI_FILE_STATUS action);
extern int           lexer_configured_correctly(void);
extern char          *mklower(char *s);
extern void          reset_lex_input_state(void);
extern int           start_ppt_instance_and_wait(unsigned long);
extern void          stdin_prompt(void);
extern void          syntax_error(const char *msg, int syserrno);
extern char          *trim(char *s);
extern void          warning_msg(const char *msg, int syserrno);
extern void          *xmalloc(size_t n);       /* aborts if out of mem */
extern char          *xstrdup(const char *);   /* aborts if out of mem */
extern int           yylex();
extern int           yyparse();

/* --------------------------- grammar semantic actions ----------- */

extern int           copy_src_fmt(P3ICLI_CMD_DATA *);
extern int           delete_image_files(P3ICLI_CMD_DATA *);
extern int           duplicate_tmplt(P3ICLI_CMD_DATA *);
extern int           encoding(P3ICLI_CMD_DATA *);
extern int           ignore_image_file(P3ICLI_CMD_DATA *);
extern int           insert_pic(P3ICLI_CMD_DATA *);
extern int           insert_tmplt_slide(P3ICLI_CMD_DATA *);
extern int           kill_ppt(P3ICLI_CMD_DATA *);
extern int           list_geometries(P3ICLI_CMD_DATA *);
extern int           open_tmplt(P3ICLI_CMD_DATA *);
extern int           remove_comments(P3ICLI_CMD_DATA *);
extern int           save_as(P3ICLI_CMD_DATA *);
extern int           script_pause(P3ICLI_CMD_DATA *);
extern int           set_caption(P3ICLI_CMD_DATA *);
extern int           set_cap_geometry(P3ICLI_CMD_DATA *);
extern int           set_custom_property(P3ICLI_CMD_DATA *);
extern int           set_pic_geometry(P3ICLI_CMD_DATA *);
extern int           set_title(P3ICLI_CMD_DATA *);
extern int           set_title_geometry(P3ICLI_CMD_DATA *);
extern int           set_slide_size(P3ICLI_CMD_DATA *);
extern int           start_ppt(P3ICLI_CMD_DATA *);
extern int           third_party_fix(P3ICLI_CMD_DATA *);
extern int           tidy_tmplt(P3ICLI_CMD_DATA *);


#ifdef __cplusplus
}
#endif

#endif /* ifndef CDEFS_H */
