#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main101()
{

	const int a = 10;

	int * p = &a;
	*p = 100;
	printf("%d\n", a);


	return EXIT_SUCCESS;
}
int main102(void)
{
	int a = 10;
	int b = 20;
	//指向常量的指针
	const int* p = &a;
	p = &b;//ok
	//*p = 100;//err
	return 0;
}
int main103(void)
{
	int a = 10;
	int b = 20;
	//常量指针
	int* const p = &a;
	//p = &b;//err
	*p = 100;
	return 0;
}
int main104(void)
{
	int a = 10;
	int b = 20;
	const int* const p = &a;
	//p = &b;//err
	//*p = 100;//err
	//通过二级指针改变只读指针指向的值
	int **p1 = &p;
	//**p1 = 100;
	*p1 = &b;

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", p);
}
