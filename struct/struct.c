#include "stdio.h"
struct man{
	char *name;
	int age;
}yang,kong;
void  main(int argc, char ** argv[])
{

	yang.name = "yang jia qi";
	kong.name = "kong de ci";
	yang.age = 10;
	kong.age = 5;
	printf("%d\n", "%s\n", yang.age, yang.name);
}
