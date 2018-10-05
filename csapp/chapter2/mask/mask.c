#include <stdio.h>

int to_mask(int x)
{
    return x & 0xFF;
}
// 最低有效位不变其他位取补
// 任何数和1进行异或运算得到的是它的反
int to_fill(int x)
{
    return x ^ ~0xFF;
}
// x 最低有效字节全为1，其他字节不变
int to_one(int x)
{
    return x | 0xFF;
}
void main(int argc, char **argv[])
{
    int a = 0x87654321;
    // int b = to_mask(a); // b= 21
    // int c = a - b; // c = 87654300
    // int d = ~c - 0xff;
    // int f = d + b;
    int f = to_fill(a);
    int o = to_one(a);
    printf("%x\n", f);
    printf("%x\n", o);
}