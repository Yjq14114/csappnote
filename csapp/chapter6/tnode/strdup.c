#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "head.h"

char *strdupme(char *s)
{
    char *p;
    p = (char *)malloc(strlen(s) + 1);
    if (p != NULL)
    {
        /* code */
        strcpy(p, s);
    }
    return p;
}