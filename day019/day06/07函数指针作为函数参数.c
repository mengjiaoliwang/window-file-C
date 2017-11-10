#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef void(*opt)(int, int);
void fun10(int a, int b)
{
	printf("%d\n", a + b);
}
void fun11(int a, int b)
{
	printf("%d\n", a - b);
}
void fun12(int a, int b)
{
	printf("%d\n", a * b);
}
void fun13(int a, int b)
{
	printf("%d\n", a / b);
}
void fun14(int a, int b)
{

}
//opt为函数指针 o为指针变量
//函数指针作为函数参数可以统一接口
//协同开发变得更简单
//C++多态的体现
/*
面向对象开发 封装 继承  多态
C语言面向过程开发
C++面向对象开发  MVC
面向时间开发
*/
void calc(int a, int b, opt o)
{
	o(a, b);
}
int main07()
{
	calc(10, 20, fun12);

	return EXIT_SUCCESS;
}