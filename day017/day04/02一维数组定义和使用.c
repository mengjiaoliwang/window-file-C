#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5

int main0201()
{

	//数组定义
	//int arr[5] = { 1,2,3,4,5 };
	//int arr[] = { 1,2,3,4,5 };
	//int arr[5] = { 1,2,3 };
	//int arr[5] = { 1 };
	//int arr[MAX];

	int *arr = (int *)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);


	return EXIT_SUCCESS;
}

int main0202(void)
{
	int arr[5] = { 1,2,3,4,5 };
	//求出数组在内存中占的字节大小
	sizeof(arr);//20
	sizeof(arr[0]);//4
	//数组元素个数
	sizeof(arr) / sizeof(arr[0]);


	//数组名  是数组的首地址  &arr[0]  指向了数组中第一个元素的地址  数组名是一个常量 不能被赋值

}


/*
数组作为函数参数，退化为指针
需要传递两个值一个是数组起始地址 数组元素个数
*/
void fun01(int arr[100],int len)
{
	//printf("%p\n", arr);
	//printf("%d\n", sizeof(arr));
	for (int i = 0; i < len; i++)
		printf("%d\n", arr[i]);

}

int main0203(void)
{
	int arr[5] = { 1,2,3,4,5 };


	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr+1);
	//printf("%d\n", sizeof(arr));


	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//	printf("%d\n", arr[i]);

	fun01(arr, sizeof(arr) / sizeof(arr[0]));


	return 0;
}