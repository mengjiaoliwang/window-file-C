#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//定义函数指针类型
typedef void(*opt)(int, int);

void fun01(int a, int b)
{
	printf("%d\n", a + b);
}
void fun02(int a, int b)
{
	printf("%d\n", a - b);
}


int main05()
{
	//函数指针数组
	opt o[2];
	o[0] = fun01;
	o[1] = fun02;


	for (int i = 0; i < 2; i++)
	{
		//函数调用过程
		o[i](20, 10);
	}

	return EXIT_SUCCESS;
}