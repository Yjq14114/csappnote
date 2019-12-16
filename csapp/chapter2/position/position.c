#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
int main(int argc, char const *argv[])
{
    int n = 2;
    n = n & 0177;
    printf("%x\n", n);
    int x = 1;
    x = x | 1;
    printf("%x\n", x);
    int a = 16;
    a = a & 0xFF;
    printf("%x\n", a);
    unsigned long y = 0xB,result=0;
    result = y << 2;
    printf("%x\n", result);
    result = y >> 2;
    printf("%x\n", result);
    int m = 11;
    int r = getbits(m, 3, 2);
    printf("%x\n", r);
    return 0;
}

/**
 * 返回x中从第p位开始的n位
 */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
