#include <stdio.h>
#include <ctype.h>
#include "head.h"

int getword(char *word, int lim)
{
    int c, getch(void);
    void ungetch(int);
    char *w = word;
    while(isspace(c=getch()));
    if (c != EOF)
    {
        /* code */
        *w++ = c;
    }
    if (!isalpha(c))
    {
        /* code */
        *w = '\0';
        return c;
    }
    for(; --lim > 0; w++)
    {
        if (!isalnum(*w = getch()))
        {
            /* code */
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
    return word[0];
}