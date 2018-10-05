#include <stdio.h>
void to_binary(unsigned int n);
void  main(int argc, char ** argv[]) 
{
	double a = 10.0;
	printf("%l20.0\n");
	unsigned int n = 5;
	to_binary(5);
	// for(int i = 0; i < 5; i++) 
	// {
	// 	printf("\n%c", i + 0x30);
	// }
}

void to_binary(unsigned int n) {
	unsigned int i = n % 2;
	if(n >=2 ) {
		to_binary(n/2);
	}
	printf("%c", i + 0x30);
}
