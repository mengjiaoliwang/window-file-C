#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main01()
{
	int a = 10;

	//两个指针相加、相乘、相除、取余没有意义
	int *p = &a;
	int *p1 = &a;
	//int *p2 = &p;//err
	//*(*p2) = 100;

	//在不改变字符串原意上去操作字符串
	//char * p = "hello world";
	//char * p1 = "hello world";
	//char buf[] = "hello world";

	return EXIT_SUCCESS;
}