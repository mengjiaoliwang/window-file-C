#include <stdio.h>
//声明一个变量
extern int a;
//extern int a1;

void test()
{
	printf("%d\n", a);
	//printf("%d\n", a1);
}