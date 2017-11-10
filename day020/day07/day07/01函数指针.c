#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//函数指针类型
typedef void(*opt)(int, int);
void fun01(int a, int b)
{
	printf("%d\n", a + b);
}
int main01()
{
	//opt f = fun01;
	////ok
	//(*f)(10, 20);
	////ok
	//f(10, 20);

	opt f = fun01;
	//f(10, 20);
	//(*f)(10, 20);
	return EXIT_SUCCESS;
}