#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    while((c==getchar()) != EOF)
    {
        if (c == ' ')
        {
            /* code */
            putchar(c);
            while ((c=getchar()) == ' ' && c != EOF );
        }
        if (c == EOF)
        {
            /* code */
            break;
        }
        putchar(c);
    }
}
