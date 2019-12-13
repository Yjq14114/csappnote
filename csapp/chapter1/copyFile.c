#include <stdio.h>


int main(int argc, char const *argv[]) {
    char a = EOF;
    printf("%d\n", a);
    int c;
    c = getchar();
    printf("%d\n", c);
    while (c != EOF)
    {
        /* code */
        putchar(c);
        c = getchar();
    }
}