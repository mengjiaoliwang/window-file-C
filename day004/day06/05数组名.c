#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main05()
{
	int scores[10];
	//数组名是一个常量  指向数组的首地址
	//通过数组下标操作数组元素
	//scores[10] = 1;//err  数组下标越界
	//scores[0]~scores[10-1]
	//for (int i = 0; i < 10; i++)
	//	//scores[i]下标
	//	scanf("%d", &scores[i]);

	printf("数组名对应的地址：%p\n", scores);
	printf("数组第一个元素地址：%p\n", &scores[0]);

	return EXIT_SUCCESS;
}