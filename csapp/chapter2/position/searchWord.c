#include <stdio.h>

#define MAXLINE 1000

int getTheLine(char line[], int max);
int stringdex(char source[], char searchFor[]);

char pattern[] = "ould";

int main(int argc, char const *argv[])
{
    char line[MAXLINE];
    int count = 0;
    while (getTheline(line, MAXLINE) > 0)
    {
        /* code */
        if (stringdex(line, pattern) >= 0)
        {
            /* code */
            printf("%s", line);
        }
    }
    
    
    return 0;
}

int getTheLine(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int stringdex(char s[], char t[])
{
    int i, j, k;
    for(i = 0; s[i] != '\0'; i++)
    {
        for(j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')
        {
            return i;
        }
    }
    return -1;
}

