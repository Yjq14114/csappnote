#include <stdio.h>
#include <string.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	for (i = 0; i < len; i++)
	{
		printf("%.2x", start[i]);
	}
	printf("\n");
}
void show_short(short x)
{
	show_bytes((byte_pointer)&x, sizeof(short));
}
void show_long(long x)
{
	show_bytes((byte_pointer)&x, sizeof(long));
}
void show_double(double x)
{
	show_bytes((byte_pointer)&x, sizeof(double));
}
void show_int(int x)
{
	show_bytes((byte_pointer)&x, sizeof(int));
}
void show_float(float x)
{
	show_bytes((byte_pointer)&x, sizeof(float));
}
void show_pointer(void *x)
{
	show_bytes((byte_pointer)&x, sizeof(void *));
}
void show_chars(char *x) {
	show_bytes((byte_pointer)x ,strlen(x));
}
int fun1(unsigned word) {
	return (int) ((word << 24) >> 24); // 逻辑右移
}
int fun2(unsigned word) {
	return ((int) word << 24) >> 24; // 算术右移
}
void test_show_bytes(int val) {
	int ival = val;
	float fval = (float) val;
	int *pval = &val;
	show_int(val);
	show_float(fval);
	show_pointer(pval);
}
float sum_elements(float a[], int length) {
	int i;
	float result = 0;
	for(i=0; i<=length-1; i++) {
		result += a[i];
	}
	return result;
}
void main(int argc, char **argv[])
{
	// 打印x的字节表示，大小端法下表示各不相同
	// int x = 12345;
	// test_show_bytes(x);
	// char *s = "abcdef"; // c语言中的指针可以用来表示数组
	// char c[6] = {'a','b','c','d','e', 'f'};
	// show_bytes((byte_pointer)&c, 6);
	// show_chars(s);
	// int val = 0x87654321;
	// byte_pointer valp = (byte_pointer)&val;
	// show_bytes(valp, 1);
	// show_bytes(valp, 2);
	// show_bytes(valp, 3);
	short x = 12345;
	short mx = -x;
	printf("%d\n", x);
	printf("%d\n", mx);
	show_short(x);
	show_short(mx);
	float a = 10.0;
	show_float(a);
	// int w = 0x000000c9;
	// int a = fun1(w);
	// int b = fun2(w);
	// printf("%x\n", a);
	// printf("%x\n", b);
	// float a[3] = {};
	// float b = sum_elements(a, 0);
	// printf("%f\n", b);

}
