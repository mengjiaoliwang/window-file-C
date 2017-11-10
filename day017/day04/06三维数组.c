#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//三级指针作为函数参数 需要写行和列的精度
void   fun03(int p[2][3][4])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				printf("%d ", p[i][j][k]);
			}
			printf("\n");
		}
	}
}
//void   fun03(int p[][3][4]);
//void   fun03(int (*p)[3][4]);
int main06()
{
	//OpenGL3D
	//程序员是五维空间的神
	int arr[2][3][4]=
	{
		{
			{1,2,3,4},
			{2,3,4,5},
			{3,4,5,6}
		},
		{
			{4,5,6,7},
			{5,6,7,8},
			{6,7,8,9}
		}
	};


	//层：
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//行
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//列
	printf("%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));

	fun03(arr);

	return EXIT_SUCCESS;
}