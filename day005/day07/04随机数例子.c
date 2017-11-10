#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>

int main04()
{
	srand((unsigned int)time(NULL));
	int a, b, c, d;
	int a1, b1, c1, d1;
	a1 = rand() % 10;
	b1 = rand() % 10;
	c1 = rand() % 10;
	d1 = rand() % 10;

	int flag = 0;
	while (1)
	{
		printf("请输入4个数\n");
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (a == a1)
		{
			printf("第一位猜对了！\n");
			flag++;
		}
		if (b == b1)
		{
			printf("第二位猜对了！\n");
			flag++;

		}
		if (c == c1)
		{
			printf("第三位猜对了！\n");
			flag++;

		}
		if (d == d1)
		{
			printf("第四位猜对了！\n");
			flag++;

		}

		if (flag == 4)
		{
			break;
		}
		else
		{
			flag = 0;
		}
	}


	return EXIT_SUCCESS;
}