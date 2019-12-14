#include <stdio.h>
int main(int argc, char const *argv[]) {
    int c;
    int count,spaceCount,tabCount;
    count = 0;
    spaceCount = 0;
    tabCount = 0;
    while ((c = getchar()) != EOF)
    {
        /* code */
        if (c == '\n')
        {
            count++;
        }
        if (c == 32)
        {
            spaceCount++;
        }
        if (c == '\t')
        {
            tabCount++;
        }
    }
    printf("%d-%d-%d\n", count, spaceCount, tabCount);
}