#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//void swap(int a, int b)
//{
//	int temp=a;
//	a = b;
//	b = temp;
//	return;
//}


void fun02(int a)
{
	a = a + 100;
}

int main18()
{
	//int a = 10; 
	//int b = 20;

	//swap(a, b);
	//printf("%d\n", a);
	//printf("%d\n", b;

	int a = 10;
	fun02(a);
	printf("%d\n", a);

	return EXIT_SUCCESS;
}