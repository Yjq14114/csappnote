#include <stdio.h>
void inplace_swap(int *x, int *y) {
    // int a = 3;
    // *x = a;
    // printf("x=%d\n", *x);
    // printf("y=%d\n", *y);
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void main(int argc, char **argv[])
{
    int x = 3;
    int y = 3;
    int a[2] = {1,3};
    inplace_swap(&x, &y);
    printf("%d\n", x);
    printf("%d\n", y);
    inplace_swap(&a[1], &a[1]);
    printf("%d\n", a[1]);

}