#include <stdio.h>
unsigned replace_byte(unsigned x, unsigned char b, int i)
{
    return (x & ~(0xff << (i * 8))) ^ (b << (i * 8));
}
/**
 * x的任何位都等于1
 */
int x_eq_one(int x) {
    return !((x ^ __INT32_MAX__) || 0);   
}
/**
 * x的最高有效字节的位等于1
 */
int x_eq_hight(unsigned x) {
    int length = sizeof(int) - 1;
    char *bytes = (char*)&x;
    for (int i = 0; i < 4; i++)
    {
        printf("%.2x", bytes[i]);
        printf("\n");
    }
    unsigned hight = bytes[length];
    printf("%x\n", hight);
    return 0;

}
void main(int argc, char **argv[]) {
    unsigned x = 0x12345678;
    int z = replace_byte(x, 0xAB, 3);
    printf("%x\n", z);
    int a = __INT32_MAX__;
    printf("%x\n", x_eq_one(x));
    unsigned s = 0xdd123456; 
    x_eq_hight(s);
}