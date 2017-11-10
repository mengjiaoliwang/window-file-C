#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>

int main16()
{
	/*
	1、导入头文件 time.h stdlib.h
	2、添加随机数种子
		srand((unsigned int)time(NULL));
	3、生成随机数 rand()%100 0-99  rand()%11->  0-10+50->50-60
	*/
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		printf("%d\n", rand() % 11 + 50);
	}
	return EXIT_SUCCESS;
}