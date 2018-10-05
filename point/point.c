#include "stdio.h"

void main(int argc, char ** argv[]) 
{
	int a = 10;

	printf("%p\n", &a);
	printf("%d\n", a);
	int *p = &a; // 初始化指针变量*p , 
	*p = 15; // 将地址为*p 的内存变量从新赋值为15
	int b = 5;
	p = &b;
	printf("%p\n", p); // 打印指针变量*p指向的内存变量的值
	printf("%d\n", a);
	printf("%p\n", &a);
	// int i = *p;
	// p++;
	// printf("%d\n", sizeof(p));
	// printf("%d\n", p);
	// char b = 'H';
	// printf("%c\n", b);
	// printf("%d\n",sizeof(b));
	// char array[] = "hello";
	// printf("%c\n", array[0]);
	// char name[7] = "michael";
	// for(i=0; i < 7; i++) {
	// 	printf("my name is %c\n", name[i]);
	// }


}
