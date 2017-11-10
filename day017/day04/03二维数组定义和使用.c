#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0301()
{
	int arr[][3] = { 1,2,3,4,5,6,7 };


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}

	return EXIT_SUCCESS;
}
int main0302(void)
{
	int arr[][3] = { 1,2,3,4,5,6,7,8 };

	//二维数组整体大小
	printf("%d\n", sizeof(arr));
	//二维数组整行大小
	printf("%d\n", sizeof(arr[0]));
	//二维数组元素大小
	printf("%d\n", sizeof(arr[0][0]));

	//行数
	int row = sizeof(arr) / sizeof(arr[0]);
	//列数
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("行数：%d\n", row);
	printf("列数：%d\n", col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}

	return 0;
}

int main0303(void)
{
	int arr[][3] = { 1,2,3,4,5,6,7,8 };
	//arr表示二维数组的首地址
	//arr[0]表示二维数组的首地址
	//&arr[0][0]表示二维数组的首地址
	//printf("首地址:%p\n", arr);
	//printf("首地址:%p\n", arr[0]);
	//printf("首地址:%p\n", &arr[0][0]);

	//printf("第二行：%p\n", arr + 1);
	//printf("第二行：%p\n", arr[1]);
	//printf("第二行：%p\n", &arr[1][0]);

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			printf("%p\n", &arr[i][j]);
	return 0;
}

int main0304(void)
{
	//在栈区二维数组其实是一个连续的一维数组
	int arr[][3] = { 1,2,3,4,5,6,7,8 };

	int *p = arr;

	for (int i = 0; i < 3 * 3; i++)
	{
		printf("%d\n", p[i]);
	}
}

int main0305(void)
{
	//堆区的二维数组
	//堆区开辟的二维数组不是连续的  
	int ** p = (int **)malloc(sizeof(int*) * 3);

	for (int i = 0; i < 3; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * 3);
		for (int j = 0; j < 3; j++)
		{
			p[i][j] = i + j;
		}
	}

	for (int i = 0; i < 3; i++)
		printf("%p\n", p[i]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
		free(p[i]);

	free(p);
}