#include <stdio.h>
#include <ctype.h>

#include "../calc/calc.h"

int getfloat(int *pn)
{

    return 0.0;
}
int getint(int *pn)
{

    int c, sign;
    /* while 循环输入字符是否是空字符，如果继续是*/

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
    }    return c;
}

