#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main06()
{
	int weight[10];
	int size = sizeof(weight) / sizeof(weight[0]);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &weight[i]);
	}
	//最重的小猪
	int max = weight[0];
	//找到对应下标
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < weight[i])
		{
			max = weight[i];
			index = i;
		}
	}
	printf("最重的小猪为：%d号 体重为：%d\n", index + 1, max);

	return EXIT_SUCCESS;
}