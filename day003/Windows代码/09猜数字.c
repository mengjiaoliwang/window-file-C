#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//使用随机数
#include <time.h>

int main09()
{
	//加入随机数种子
	srand((unsigned int)time(NULL));
	//int i = 0;
	//while (i<100)
	//{
	//	int a = rand() % 100 + 1;//0-99+1
	//	printf("%d\n", a);
	//	i++;
	//}
	//生成随机数
	int a = rand() % 100 + 1;//0-99+1
	int b;

	while (1)
	{
		printf("请输入1-100内的数字\n");
		scanf("%d", &b);
		if (b > a)
		{
			printf("你输入的数太大了!\n");
		}
		else if (b < a)
		{
			printf("你输入的数太小了!\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}

	return EXIT_SUCCESS;
}