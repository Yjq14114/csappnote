#include <stdio.h>

/**
 * 将制表符、回退符号、反斜杠、替换为显示的\t、\b、\\
 */
int main(int argc, char const *argv[])
{
    /* code */
    int c;
    while((c=getchar()) != EOF) {
        if (c == '\t')
        {
            /* code */
            printf("\\t");
        } else if (c == '\b')
        {
            /* code */
            printf("\\b");
        } else if (c == '\\')
        {
            /* code */
            printf("\\\\");
        } else {
            putchar(c);
            // printf("%c", c);
        }
    }
    return 0;
}
