#include <stdlib.h>
#include "head.h"

char *strdup(char *s)
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