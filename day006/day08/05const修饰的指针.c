#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main501()
{
	/*
	const 修饰的变量成为只读变量 常量
	可以通过一级指针修改
	*/
	const int a = 10;
	//a = 100;

	int *p = &a;
	*p = 100;
	printf("%d\n", a);


	return EXIT_SUCCESS;
}

int main502(void)
{
	/*
	指向常量的指针

	可以修改指针指向
	（可以修改指针变量的值）

	不能修改指针变量指向的值
	*/
	int a = 10;
	int b = 20;
	const int* p = &a;
	//p = &b;//ok
	//*p = 100;//err

}

int main503(void)
{
	/*
	常量指针
	可以修改指针变量指向的值
	不能修改指针变量的值
	*/
	int a = 10;
	int b = 20;
	int* const p = &a;
	//p = &b;//err
	*p = 100;

	printf("%d\n", a);

}

int main504(void)
{
	/*
	只读指针
	不能修改指针变量的值
	不能修改指针变量指向的值
	*/
	int a = 10;
	int b = 20;
	const int* const p = &a;
	//p = &b;//err
	//*p = 100;//err
}
