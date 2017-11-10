#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{
	//int arr[] = { 2,4,7,8,1,6,9,3,10,5 };

	//for (int i = 0; i < 9; i++)
	//{
	//	for (int j = 0; j < 9 - i; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	int arr[] = { 2,4,7,8,1,6,9,3,10,5 };
	//指向数组的指针 可以通过指针来操作数组
	int *p = arr;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}



	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return EXIT_SUCCESS;
}