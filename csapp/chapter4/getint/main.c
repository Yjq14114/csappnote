#include <stdio.h>

#include "../calc/calc.h"

#define SIZE 100

/**
 * 调用getint 给数组array赋值
 */
int main(int argc, char const *argv[])
{
    int n, array[SIZE];
    for(n = 0; n < SIZE && getint(&array[n]) != EOF; n++);
    return 0;
}