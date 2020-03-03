#include <stdio.h>
#include "calc.h"

#define BUFSIZE 100


char buf[BUFSIZE];
int bufp = 0;
/**
 * 判断缓冲bufp是否大于零，是返回buf数组的前一个元素，否返回输入的字符
 */
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
/**
 * 判断bufp是否大于最大值，不是就将参数c加入数组buf，并且bufp + 1
 */
void ungetch(int c)
{
    if (bufp >= BUFSIZE)
    {
        printf("ungetch: too many characters\n");
    }
    else
    {
        buf[bufp++] = c;
    }
}