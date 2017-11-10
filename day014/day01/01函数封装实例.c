#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//通过函数实现一个完整的功能
//数据排序
//冒泡排序

//函数声明
extern void BubbleSort(int * src, int len);

/*
函数的声明（可以省略）
函数的定义
函数的调用
*/
//全局函数 
//函数定义
void BubbleSort(int *src, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//正序排序 从小到大
			if (src[j] > src[j + 1])
			{
				int temp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = temp;
			}
		}
	}
}
int main01()
{
	int arr[] = { 3,6,1,5,7,8,2,9,4,10 };
	//函数调用
	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));


	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	
	return EXIT_SUCCESS;
}