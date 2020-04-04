#include <stdio.h>
#include <string.h>
#include "head.h"
#define MAXLINE 1000


int main(int argc, char const *argv[])
{
    char line[MAXLINE];
    int found = 0;
    if (argc != 2)
    {
        /* code */
        printf("Usage: find pattern\n");
    } else
    {
        while (getTheLine(line, MAXLINE) > 0)
        {
            /* code */
            if (strstr(line, argv[1]) != NULL)
            {
                printf("%s\n", line);
                /* code */
                found ++;
            }
            
        }
    }
    return found;
}
