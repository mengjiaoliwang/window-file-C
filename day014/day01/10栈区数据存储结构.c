#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun03(int a, int b, int c)
{
	//Õ»Çø  ¸ßµ½µÍ
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
}

int main10()
{
	int a = 10;
	int b = 20;
	int c = 30;


	//printf("%p\n", &a);
	//printf("%p\n", &b);
	//printf("%p\n", &c);
	fun03(a,b,c);

	return EXIT_SUCCESS;
}