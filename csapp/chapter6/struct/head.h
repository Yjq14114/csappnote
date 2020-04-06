struct tnode
{
    /* data */
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};
int getch(void);
void ungetch(int c);
struct tnode *talloc(void);
char *strdup(char *s);
void treeprint(struct tnode *p);
struct tnode *addtree(struct tnode *p, char *w);
int getword(char *word, int lim);