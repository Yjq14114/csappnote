#include "stdio.h"

void swap();

int buf[2] = {1, 2};

int main()
{
    printf("%s\n", "before");
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", buf[0]);
        printf("%d\n", buf[1]);
    }
    swap();
    printf("%s\n", "after:emoji");
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", buf[0]);
        printf("%d\n", buf[1]);
    }

    return 0;
}