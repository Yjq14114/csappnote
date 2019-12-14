#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,c;
    a = 0;
    while((c=getchar())) {
        if (a != 32 || c != 32)
        {
            /* code */
            printf("%c", c);
        }
        a = c;
        
    }
}