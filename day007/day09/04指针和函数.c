#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*
指针作为函数的参数
*/

//int swap(int a, int b)
//{
//	int temp = a; 
//	a = b;
//	b = temp;
//}
int swap(int* a, int* b)
{
	int temp = *a; 
	*a = *b;
	*b = temp;
}

int main04()
{
	/*
	值传递：
	形参不能改变实参的值
	*/
	int a = 10;
	int b = 20;
	//swap(a, b);

	/*
	地址传递：
	形参可以改变实参的值
	*/
	swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);


	return EXIT_SUCCESS;
}