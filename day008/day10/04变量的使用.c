#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//未初始化的全局变量  默认值为0
int c;


//未初始化的静态全局变量 默认值为0

static int d;
void fun06()
{
	//int c = 1000;
	//未初始化的静态局部变量 默认值为0
	static int c;
	printf("%d\n", c);
}
int main04()
{

	//int c = 100;

	//printf("%d\n", c);

	///fun06();
	//局部变量未初始化不可以使用
	int e=10;
	printf("%d\n", e);
	//printf("%d\n", d);
	return EXIT_SUCCESS;
}