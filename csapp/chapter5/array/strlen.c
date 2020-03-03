#include <stdio.h>

int strlen(char *s)
{
    int n;
    for(n=0; *s != '0'; s++)
    {
        n++;
    }
    return n;
}
int main(int argc, char const *argv[])
{
    /* code */
    int len = strlen("hello");
    return 0;
}

