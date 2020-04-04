#include <stdio.h>


int main(int argc, char const *argv[])
{
    /* code */
    for (int i = 1; i < argc; i++)
    {
        /* code */
        printf("%s%s", argv[i], (i < argc) ? " " : "");
    }
    printf("\n");
    return 0;
}

