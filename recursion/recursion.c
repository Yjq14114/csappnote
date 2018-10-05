#include <stdio.h>
void up_down(int n);
void  main(int argc, char ** argv[])
{
	up_down(1);
}

void up_down(int n) 
{
	printf("in %d, location %p\n", n, &n);
	if (n < 4) {
		up_down((n+1));
	}
	printf("out %d, location %p\n", n, &n);
}
