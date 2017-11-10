#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main03()
{
	//定义数组格式  数据类型 数组名[数组元素个数]
	//int scores[10];
	//找到数组的元素   通过下标进行赋值 
	//数组下标是0-数组元素个数-1
	//scores[0]就相当于一个 int类型的变量
	//scores[0] = 1;
	//scores[1] = 2;
	//scores[9] = 10;
	//数组元素赋值：
	int scores[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//为数组的前五个元素赋值 未赋值的默认为0
	//int scores[10] = { 1,2,3,4,5 };
	//int scores[] = { 1,2,3,4,5 };
	

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", scores[i]);
	}
	//printf("%d\n", scores[9]);

	//数组大小
	//printf("数组在内存中大小：%d\n", sizeof(scores));
	//数组元素在内存中的地址

	//printf("scores[0]地址：%p\n", &scores[0]);
	//printf("scores[1]地址：%p\n", &scores[1]);
	//printf("scores[2]地址：%p\n", &scores[2]);

	return EXIT_SUCCESS;
}