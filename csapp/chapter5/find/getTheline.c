#include <stdio.h>
#include "head.h"

int getTheLine(char line[], int maxline)
{
    int c, i;
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        /* code */
        line[i] = c;
    }
    if (c == '\n')
    {
        /* code */
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}