#include <stdio.h>
/**
 * objdump -d code.o 反汇编器
 */
int accum = 0;
int sum(int x, int y) {
    int t = x + y;
    accum += t;
    return t;
}
