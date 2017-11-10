#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main08()
{


	for (int i = 1; i <= 99; i++)
	{
		if (i % 7 == 0)
		{
			printf("敲桌子\n");

			//结束本次循环继续下次循环
			continue;
		}
		else if (i % 10 == 7)
		{
			printf("敲桌子\n");
			continue;

		}
		else if(i/10==7)
		{
			printf("敲桌子\n");
			continue;

		}


		printf("%d\n", i);
	}
	return EXIT_SUCCESS;
}