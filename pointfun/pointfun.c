#include <stdio.h>
void men() {
	printf("smoke\n");
	printf("drink\n");
	printf("play game\n");
}
void woman() {
	printf("shopping\n");
	printf("sleep\n");
	printf("makeup\n");
}
void main(int argc, char ** argv[]) {
	void(*p)();
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", a);
	if (a == 0) {
		p = men;
	} else if (a == 1){
		p = woman;
	}
	p();
}
