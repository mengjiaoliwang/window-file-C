#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//5、cosnt 修饰函数函数参数  函数在实现是可以修改src的值  但是不能修改src指向的值
char *strcpy(char *dest, const char *src);

int main()
{
	//1、通过指针修改常量的值
	//const a = 10;
	////a = 100;//err

	//int * p = &a;
	//*p = 100;
	//printf("%d\n", a);

	int a = 10;
	int b = 20;
	//2、const修饰指针类型
	//const int* p = &a;
	//p = &b;//ok
	//*p = 200;//err
	//3、const修饰指针变量
	//int * const p = &a;
	//p = &b;//err
	//*p = 100;//ok

	//4、const修饰指针类型const修饰指针变量
	//const int* const p = &a;
	////*p = 100;//er
	////p = &b;
	////printf("%d\n", a);

	//int **p1 = &p;
	////*p1 = &b;
	//**p1 = 100;
	//printf("%d\n", *p);
	return EXIT_SUCCESS;
}