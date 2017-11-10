#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//变量的声明  声明不建立存储空间
//extern int a;

//函数的声明
extern void fun05();
int main()
{
	//a = 10;
	fun05();
	printf("hello");
	return EXIT_SUCCESS;
}

void fun05()
{
	//在子函数中终止程序
	exit(0);
}