#include <stdio.h>
unsigned replace_byte(unsigned x, unsigned char b, int i)
{
    return (x & ~(0xff << (i * 8))) ^ (b << (i * 8));
}
void main(int argc, char **argv[]) {
    unsigned x = 0x12345678;
    int z = replace_byte(x, 0xAB, 3);
    printf("%x\n", z);
}