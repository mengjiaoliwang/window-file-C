#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int a1 = 10;
int a2;
static int a3 = 10;
static int a4;

const int b = 10;

int main05()
{
	int a5 = 10;
	static int a6 = 10;
	static int a7;
	const int a8 = 10;
	int *a9 = NULL;
	int arr[] = { 1,2,3 };
	char * p = "hello world";

	printf("初始化的全局变量：%p\n", &a1);
	printf("未初始化的全局变量：%p\n", &a2);
	printf("初始化的静态全局变量：%p\n", &a3);
	printf("未初始化的静态全局变量：%p\n", &a4);

	printf("局部变量：%p\n", &a5);
	printf("初始化的静态局部变量：%p\n", &a6);
	printf("未初始化的静态局部变量：%p\n", &a7);
	printf("常量：%p\n", &a8);

	printf("指针：%p\n", &a9);

	printf("数组：%p\n", arr);
	printf("字符串常量：%p\n", p);

	/*数据内存存储大体分为两部分：
	1、局部变量 常量 指针 数组 -》栈区数据
	2、初始化的全局变量 未初始化的全局变量 初始化的静态全局变量
	未初始化的静态全局变量 初始化的静态局部变量 未初始化的静态局部变量
	字符串常量 -》数据区   【初始化数据区】【未初始化数据区】【字符串常量区】
	*/


	return EXIT_SUCCESS;
}