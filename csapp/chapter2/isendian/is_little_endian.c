#include <stdio.h>
int is_little_endian()
{
    int x = 1;
    printf("%x\n", x);
    char y = (char)x;
    return y;
}
void main(int argc, char **argv[])
{
    int a = is_little_endian();
    printf("%d\n", a);
}
