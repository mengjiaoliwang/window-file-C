#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun05(int a)
{
	//����
	if (a == 0)
		return;
	printf("hello world\n");
	fun05(a - 1);
}

int main04()
{
	//��ε���ͬһ����
	//for (int i = 0; i < 5;i++)
	//	fun05();


	fun05(5);

	return EXIT_SUCCESS;
}