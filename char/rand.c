#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(int argc, char ** argv[]) {
	int t = (int) time(NULL);
	srand(t);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", rand());
	}
	char s[10] = {0};
	scanf("%c", s);
}

