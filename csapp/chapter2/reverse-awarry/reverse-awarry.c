#include "inplace_swap.h"
#include "char_int.h"
#include <stdio.h>
#include <string.h>
void reverse_array(int a[], int cnt) {
    int first, last;
    for(first = 0, last = cnt-1; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}
void reverse_char(char *s) {
   int first, last;
   for(first = 0, last = strlen(s); first < last; first++, last--) {
       int a = char_int(s[first]);
       int b = char_int(s[last]);
       inplace_swap(&a, &b);
       printf("%d\n", a);
       printf("%d\n", b);
   }
}
/**
 * gcc .\reverse-awarry.c .\inplace_swap.c -o demo
 */
void main(int argc, char **argv[]) {
    int a[5] = {1,2,3,4,5};
    char *s = "12345";
    reverse_char(s);
    // for(int i = 0; i < strlen(s); i++) {
    //     printf("%c\n", s[i]);
    // }
    // reverse_char(s);
    // reverse_array(a, 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", a[i]);
    // } 
    // int b = 27;
    // int c = b%2;
    // printf("%d\n", c);
}