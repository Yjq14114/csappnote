#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "head.h"

#define MAXWORD 100
int main(int argc, char const *argv[])
{
    struct tnode *root;
    char word[MAXWORD];
    root = NULL;
    while(getword(word, MAXWORD) != EOF)
    {
        if(isalpha(word[0])){
            root = addtree(root, word);
        }
    }
    treeprint(root);
    return 0;
}
