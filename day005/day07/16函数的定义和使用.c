#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//函数的声明
int BubbleSort(int arr[], int len);
int main16()
{
	//函数的声明
	//printf("hello");

	int arr[] = { 9,4,6,5,3,10,8,7,2,1 };
	//int arr1[] = { 19,4,61,5,33,10,88,7,21,16 };
	//函数的调用
	//数组作为函数参数退化为指针
	//函数调用中 函数的参数有具体的值 成为实际参数 简称实参
	BubbleSort(arr,10);
	//BubbleSort(arr1[10]);

	
	for (int i= 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return EXIT_SUCCESS;
}


//函数的定义  函数的实现过程
int BubbleSort(int arr[], int len)
{
	if (arr == NULL)
		return 1;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return 0;
}