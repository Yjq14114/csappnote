#include <stdio.h>
void main(int argc, char **argv[])
{
    int a = is_little_endian();
    printf("%d\n", a);
}
int is_little_endian()
{
    int x = 1;
    char y = (char)x;
    return y;
}