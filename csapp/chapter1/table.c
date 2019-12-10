#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fahr, cersius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("%5s\n", "title");
    while(fahr <= 300) 
    {
        cersius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, cersius);
        fahr = fahr + step;
    }
}
