#include<stdio.h>
void main(int argc, char ** argv[]) 
{
	// 二级指针
	int a = 10;
	int *p = &a;
	printf("%d\n", p);
	int **pp = &p;
	int I = **pp;
	printf("%d\n", I);
}
