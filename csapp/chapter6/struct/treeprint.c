#include <stdio.h>
#include "head.h"

void treeprint(struct tnode *p)
{
    if (p != NULL)
    {
        /* code */
        treeprint(p -> left);
        printf("%4d %s\n", p -> count, p-> word);
        treeprint(p -> right);
    }
}