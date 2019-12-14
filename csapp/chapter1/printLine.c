#include <stdio.h>
#define MAXLINE 1000

int getTheLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getTheLine(line, MAXLINE)) > 0)
    {
        /* code */
        if (len > max)
        {
            /* code */
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        /* code */
        printf("%s", longest);
    }

    return 0;
}

/**
 * getTheLine 将一行读入到line中并返回其长度
 */
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
/**
 * copy函数
 */
void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
    {
        /* code */
        i++;
    }
}
