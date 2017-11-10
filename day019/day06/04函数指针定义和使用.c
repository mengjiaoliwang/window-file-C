#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//定义函数类型
typedef  void opt(int, int);
void add(int a, int b)
{
	printf("%d\n", a + b);
}
void sub(int a, int b)
{
	printf("%d\n", a - b);
}

int main04()
{
	//函数指针
	opt* o;
	//o = add;
	//printf("%p\n", o);
	//o = sub;
	//printf("%p\n", o);

	//通过函数指针操作函数
	//o = add;
	o = sub;
	o(10, 20);


	return EXIT_SUCCESS;
}