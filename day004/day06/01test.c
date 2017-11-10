#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main01()
{
	//if (3 > 2)
	//{
	//	printf("3大于2");
	//	if (3 > 1)
	//	{

	//	}
	//}
	////表达式？值1 （表达式）：值2（表达式）；

	//int a = 1;
	//while (a < 10)
	//	printf("%d\n", a++);

	// 1*1=1
	// 1*2=2 2*2=4
	// 1*3=3 2*3=6 3*3=9
	//乘法口诀
	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%d ", j, i, i*j);
	//	}
	//	printf("\n");
	//}

	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//伪代码
	for (int i = 0; i < 9; i++)
	{
		//打印空格
		for (int j = 9 - 1; j > i; j--)
			printf(" ");
		//打印星星
		for (int k = 0; k < 2 * i + 1; k++)
			printf("%c",65);

		printf("\n");
	}
	system("pause");
	return EXIT_SUCCESS;
}