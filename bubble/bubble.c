#include "stdio.h"

void  main(int argc, char ** argv[])
{
	int x[5] = {9,8,3,5,2};
	int m = 0, n = 0;
	int n_temp = 0;
	int i = 0;
	printf("before bubble:\n");
	printf("%d\n", sizeof(x[5]));
	printf("%d\n", sizeof(x)/sizeof(x[0]));
	printf("%d\n", sizeof(x));
	for(i = 0; i < 5; i++){
		printf("x[%d]=%d\n", i, x[i]);
	}
	for(m = 0; m < 5-1; m++) {
		for(n = 0; n < 5-1-m; n++) {
			if(x[n] > x[n+1]){
                           n_temp = x[n];
			   x[n] = x[n+1];
			   x[n+1] = n_temp;
			}
		}
	}
	printf("after bubble\n");
	for(i = 0; i < 5; i++){
		printf("x[%d]=%d\n", i, x[i]);
	}
}
