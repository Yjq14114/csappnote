#include <stdlib.h>
#include "head.h"

struct tnode *talloc(void)
{
    /* data */
    return (struct tnode *) malloc(sizeof(struct tnode));
};
