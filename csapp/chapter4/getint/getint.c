#include <stdio.h>
#include <ctype.h>

#include "../calc/calc.h"


int getint(int *pn)
{

    int c, sign;
    while (isspace(c = getch()));
    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        /* code */
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1:1;
    if (c == '+' || c == '-')
    {
        /* code */
        c = getch();
    }
    for(*pn = 0; isdigit(c); c=getch()){
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;
    if (c != EOF)
    {
        /* code */
        ungetch(c);
    }
    return c;
}

