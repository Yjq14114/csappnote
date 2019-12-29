#include <stdio.h>
#include "sort.h"

#define ALLOCSIZE 10000
#define MAXLEN 1000
static char allocbuff[ALLOCSIZE];
static char *allocp = allocbuff;



char *alloc(int n)
{
    if (allocbuff + ALLOCSIZE - allocp >= n)
    {
        allocp += n; 
        return allocp - n;
    } else {
        return 0;
    }
}

void afree(char *p)
{
    if(p >= allocbuff && p < allocbuff + ALLOCSIZE)
    {
        allocp = p;
    }
}

/**
 * 将输入的字符放进数组s中，并返回 s的长度
 */
int getline(char s[], int lim)
{
    int c, i;
    i = 0;
    while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
    {
        s [i++] = c;
    }
    s[i] = '\n';
    return i;
}

void strcpy(char *s, char *t)
{
    int i = 0;
    while (*s++ = *t++);
}
int strcmp(char *s, char *t)
{
    for(; *s == *t; s++, t++)
    {
        if (*s == '\0')
        {
            /* code */
            return 0;
        }
    }
    return *s - *t;
}

void swap(char *v[], int i, int j)
{
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];
    nlines = 0;
    while((len = getline(line, MAXLEN)) > 0)
    {
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
        {
            /* code */
            return -1;
        } else {
            line[len-1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

void writelines(char *lineptr[], int nlines)
{
    int i;
    for(i =0; i < nlines; i++)
    {
        printf("%s\n", lineptr[i]);
    }
}

void qsort(char *v[], int left, int right)
{
    int i, last;
    if (left >= right)
    {
        /* code */
        return;
    }
    swap(v, left, (left - right)/2);
    last = left;
    for (i = left + 1; i <= right; i++)
    {
        if (strcmp(v[i], v[left]) < 0)
        {
            /* code */
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}