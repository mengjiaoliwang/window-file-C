#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun05(int a)
{
	//出口
	if (a == 0)
		return;
	printf("hello world\n");
	fun05(a - 1);
}

int main04()
{
	//多次调用同一函数
	//for (int i = 0; i < 5;i++)
	//	fun05();


	fun05(5);

	return EXIT_SUCCESS;
}