#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define A 10

//const int b = 10;

int main07()
{
	//常量  不安全可以通过指针间接修改常量的值
	const int a = 10;

	//int b = A*A;
	int *p = &a;

	*p = 100;
	printf("%d\n", a);

	return EXIT_SUCCESS;
}