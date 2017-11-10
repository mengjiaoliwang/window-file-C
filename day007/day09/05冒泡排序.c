#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//数组作为函数参数时，会蜕化为指针，并且无法求出数组长度需要传递一个数组长度保证数组不越界
//数组在传递是为地址传递，形参会改变实参的值
void BubbleSort1(int* arr, int len)
{
	//printf("形参中大小:%d\n", sizeof(arr));

	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main05()
{
	int arr[] = { 4,8,1,9,3,7,6,10,5,2 };

	//printf("实参中大小:%d\n", sizeof(arr));
	BubbleSort1(arr, 10);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d\n", arr[i]);
	return EXIT_SUCCESS;
}