#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main05(void)
{
	/*
	int a=10;
	int b=20;
	int c;
	a>b ? (c = a):(c =  b);

	if(a>b)
	{
	c=a;
	}
	else
	{
	c=b;
	}

	printf("%d\n",c);
	*/

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int d;
	//a>b ?(a>c ? ((printf("a����");):(printf("c����");)):(b>c ? (printf("b����");):(printf("c����");));
	a > b ? (a > c ? (d = a) : (d = c)) : (b > c ? (d = b) : (d = c));
	printf("���ص�С��Ϊ:%d\n", d);
	return 0;
}
