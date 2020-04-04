#include <stdio.h>
#include <string.h>
#include "head.h"
#define MAXLINE 1000

/**
 * find 函数：打印所有与第一个参数指定的模式相匹配的行 
 * 
 * 示例
PS D:\code\c\csapp\chapter5\find> .\find.exe -nx yang
a
1:a
n
2:n
g
3:g
 */
int main(int argc, char const *argv[])
{
    char line[MAXLINE];
    long lineno = 0;
    int c, except = 0, number = 0, found = 0;
    while (--argc > 0 && (*++argv)[0] == '-')
    {
        while (c = *++argv[0])
        {
            /* code */
            switch (c)
            {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            default:
                printf("find: illegal option %c\n", c);
                argc = 0;
                found = -1;
                break;
            }
        }
    }

    if (argc != 1)
    {
        /* code */
        printf("Usage: find -x -n pattern\n");
    }
    else
    {
        while (getTheLine(line, MAXLINE) > 0)
        {
            /* code */
            lineno++;
            if ((strstr(line, *argv) != NULL) != except)
            {
                /* code */
                if (number)
                {
                    /* code */
                    printf("%ld:", lineno);
                }
                printf("%s", line);
            }
        }
    }

    return found;
}