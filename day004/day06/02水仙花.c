#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main02()
{
	int a, b, c;
	for (int i = 100; i < 1000; i++)
	{
		//1、求出百位、十位、个位的值
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		//2、判断是否是水仙花数 打印输出
		//if (i == a*a*a + b*b*b + c*c*c)
		if (i == pow(a,3) + pow(b,3) + pow(c,3))
			printf("%d\n", i);
	}


	return EXIT_SUCCESS;
}