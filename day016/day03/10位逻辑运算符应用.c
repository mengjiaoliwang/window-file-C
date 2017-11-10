#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1001()
{
	char a = 1;
	a = a | ~a;//1
	/*
	0000 1010
	1111 0101
	1111 1111 
	*/
	a = 1;
	a = a&~a;//0
	/*
	0000 1010
	1111 0101
	0000 0000
	*/
	printf("%d\n", a);



	return EXIT_SUCCESS;
}

int main1002(void)
{
	int a = 10;
	int b = 20;

	//1、临时变量
	//int temp = a;
	//a = b;
	//b = temp;
	//2、相加相减
	//a = a + b;//30
	//b = a - b;//30-20=10
	//a = a - b;//30-10=20
	//3、异或
	a = a^b;
	b = a^b;
	a = a^b;
	/*
	0000 1010
	0001 0100
	a=0001 1110   30

	b=0001 0100
	b=0000 1010   10


	a=0001 1110   30
	b=0000 1010   10
	a=0001 0100   20
	

	
	*/


	printf("%d\n", a);
	printf("%d\n", b);

}