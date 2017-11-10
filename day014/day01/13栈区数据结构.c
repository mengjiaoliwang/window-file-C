#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void fun04()
{
	int a = 10;
	int b = 20;
	int c = 30;


	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
}
void fun05()
{
	int a = 30;
	int b = 20;
	int c = 10;


	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
}


//ËÀµÝ¹é  Õ»ÇøÒç³ö
void fun06()
{
	fun06();
}
int main()
{

	fun06();
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//printf("%p\n", &a);
	//printf("%p\n", &b);
	//printf("%p\n", &c);
	//fun04();
	//fun05();


	return 0;
}