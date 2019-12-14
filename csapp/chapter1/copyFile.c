#include <stdio.h>


/**
 * 复制文本到输出
 */
int main(int argc, char const *argv[]) {
    int c;
    c = getchar();
    while (c != EOF)
    {
        /* code */
        putchar(c);
        c = getchar();
    }
}