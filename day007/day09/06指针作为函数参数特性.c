#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
/*
指针作为函数参数的输入特性
*/
void random(int * arr, int len)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < len; i++)
		arr[i] = rand() % 100;
}
/*
指针作为函数参数的输出特性
*/
void print(int *arr, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d\n", arr[i]);
}

void BubbleSort(int * src, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (src[j] > src[j + 1])
			{
				int temp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = temp;
			}
		}
	}
}

int main06()
{

	int arr[10];
	random(arr, 10);
	printf("排序前：\n");
	print(arr, 10);
	BubbleSort(arr, 10);
	printf("排序后：\n");
	print(arr, 10);
	

	return EXIT_SUCCESS;
}