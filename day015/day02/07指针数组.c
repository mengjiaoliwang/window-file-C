#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };
	int arr[2][3] = { {1,2,3},{2,3,4} };//err
	//指针数组和二维数组是有区别的
	int* p[3] = { a,b,c };
	//printf("%p\n", p[0]);


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			//数组的下标可以当做* 来使用都是降低指针维度的
			//二维数组
			printf("%d\n", p[i][j]);
			//指针
			printf("%d\n", *(*(p + i) + j));
			//数组指针结合
			printf("%d\n", *(p[i] + j));
		}
	}

	return EXIT_SUCCESS;
}