#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main08()
{

	int arr[10] = { 2,7,9,3,6,10,1,5,8,4 };

	printf("排序前：\n");
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);


	//冒泡排序
	//外层控制行  每执行一次能确定一个最大值
	//时间广度  空间广度
	for (int i = 0; i < 9; i++)
	{
		//内存控制列 每执行一次判断两个相邻的数大小
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("排序后：\n");
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return EXIT_SUCCESS;
}