#include <stdio.h>
/**
 * 等价与x==y
 */
int bool_eq(int x, int y) {
    // return (x^y) == 0; 
    return !(x^y);
}

void main(int argc, char **argv[]) {
    int x = 0x66;
    int y = 0x76;
    int z = bool_eq(x, y);
    printf("%x\n", z);
    int a = x&y;
    int b = x&&y;
    printf("%x\n", a);
    printf("%d\n", b);
    int c = x|y;
    int d = x||y;
    printf("%x\n", c);
    printf("%d\n", d);
    int f = !0x41;
    printf("%d\n", f);
}