#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//二维数组作为函数参数蜕化为指针时丢失列精度
//void fun02(int **p)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			//printf("%d\n", p[i][j]);
//	}
//}

//二维数组作为函数参数添加行和列的精度
//void fun02(int arr[3][3])
//{
//	//printf("数组大小：%d\n", sizeof(arr));//4  12  36
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d\n", arr[i][j]);
//	}
//}
//二维数组作为函数参数添加列的精度
//void fun02(int arr[][3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d\n", arr[i][j]);
//	}
//}
//二维数组作为函数参数可以退化为指针数组  需要写成(*p)[3] 因为有限级别[]高于*
void fun02(int (*p)[3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d\n", p[i][j]);
	}
}

int main05()
{
	int arr[3][3] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };

	fun02(arr);

	return EXIT_SUCCESS;
}