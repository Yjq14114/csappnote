#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "head.h"


// #define NKEYS (sizeof keytab / sizeof(struct key))
// int binsearch(char *word, struct key tab[], int n) {
//     int cond;
//     int low, high, mid;
//     low = 0;
//     high = n - 1;
//     while (low <= high)
//     {
//         /* code */
//         mid = low + (low+high) / 2;
//         if ((cond = strcmp(word, tab[mid].word)) < 0)
//         {
//             /* code */
//             high = mid - 1;
//         } else if(cond > 0){
//             low = mid - 1;
//         } else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(int argc, char const *argv[])
// {
//     char *word = "default";
//     printf("%d\n", NKEYS);
//     int rs = binsearch(word, keytab, NKEYS);
//     printf("%d\n", rs);
//     printf("%s\n", keytab[rs]);
//     return 0;
// }
