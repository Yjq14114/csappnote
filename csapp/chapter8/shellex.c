#include "cssapp.h"
#define MAXARGS 128


void eval(char *cmdline);
int parseline(char *buf, char **argv);
int builtin_command(char **argv);

int main()
{
    char cmdline[MAXLINE];
    while(1) {
        printf(">");
        Fgets(cmdline, MAXLINE, stdin);
        if (feof(stdin))
        {
            exit(0);
        }
        eval(cmdline);
    }
}   

int parseline(char *buf, char **argv)
{
    char *delim; /*Points to first space delimiter */
    int argc; /*Number of args */
    int bg; /*Background job? */
}