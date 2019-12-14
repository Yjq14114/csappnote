#include <stdio.h>
/**
 * 将多个连续的空格替换为一个空格
 */
int main(int argc, char const *argv[])
{
    int c;
    int flag;
    while ((c = getchar()) != EOF)
    {
        if (c == 32)
        {
            /* code */
            if (flag == 1)
            {
                /* code */
                continue;
            }
            flag = 1;
        }
        else
        {
            flag = 2;
        }
        printf("%c", c);
    }
}