#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//数据结构  矩阵转置
int main04()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int  temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;

		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}



	return EXIT_SUCCESS;
}