/*! \file
 * This file holds all function prototypes for the entire gschlas
 * utility.
 */

/* globals.c */
/* gschlas.c */
void gschlas_quit(void);
void main_prog(void *closure, int argc, char *argv[]);
int main(int argc, char *argv[]);
/* i_vars.c */
void i_vars_set(TOPLEVEL *pr_current);
/* parsecmd.c */
void usage(char *cmd);
int parse_commandline(int argc, char *argv[]);
/* s_util.c */
void s_util_embed(TOPLEVEL *pr_current, int embed_mode);
