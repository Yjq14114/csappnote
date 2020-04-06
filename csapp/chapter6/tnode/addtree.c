#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "head.h"

struct tnode *addtree(struct tnode *p, char *w)
{
    int cond;
    if (p == NULL)
    {
        /* code */
        p = talloc();
        p->word = strdupme(w);
        p->count = 1;
        p->left = p->right = NULL;
    }
    else if ((cond = strcmp(w, p->word)) == 0)
    {
        p->count++;
    }
    else if (cond < 0)
    {
        p->left = addtree(p->left, w);
    }
    else
    {
        p->right = addtree(p->right, w);
    }
    return p;
}