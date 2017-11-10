#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main09()
{

	//二维数组定义格式：数据类型 数组名[行数][列数]
	//二维数组元素个数：行*列
	//int arr[2][3] = 
	//{ 
	//	{1,2,3},
	//	{4,5,6}
	//};
	//int arr[2][3] =
	//{
	//	{1,2,3},
	//	{4}
	//};

	//int arr[2][3] = { 1,2,3,4,5,6 };

	//在二维数组定义时 必须要写成列的大小
	int arr[][3] = 
	{
		{1,2,3},
		{4,5,6}
	};

	//二维数组大小
	printf("二维数组大小:%d\n", sizeof(arr));
	printf("二维数组一行大小：%d\n", sizeof(arr[0]));
	printf("二维数组一个元素大小：%d\n", sizeof(arr[0][0]));
	//行数：二维数组大小/一行大小
	int row = sizeof(arr) / sizeof(arr[0]);
	//列数：一行大小/元素大小
	int cls = sizeof(arr[0]) / sizeof(arr[0][0]);

	//二维数组中的 数组名【行数】表示一个一维数组   是一个常量 代表第一行的首地址
	//arr[0] = 100;//err

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cls; j++)
		{
			//printf("%d ", arr[i][j]);
			//打印所有二维数组地址
			printf("arr[%d][%d]地址：%p\n", i, j, &arr[i][j]);
		}
		//printf("\n");
	}
	printf("二维数组首地址：%p\n", arr);
	printf("二维数组首地址：%p\n", arr[0]);
	printf("二维数组首地址：%p\n", &arr[0][0]);
	printf("二维数组第二行地址：%p\n", arr[1]);

	return EXIT_SUCCESS;
}