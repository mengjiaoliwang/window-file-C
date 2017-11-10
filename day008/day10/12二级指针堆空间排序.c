#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main12()
{
	int **p = (int **)malloc(sizeof(int*) * 3);
	for (int i = 0; i < 3; i++)
		p[i] = (int*)malloc(sizeof(int) * 3);

	//∏≥÷µ
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}
	//¥Ú”°
	printf("≈≈–Ú«∞£∫\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}
	//≈≈–Ú
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			int sum1 = p[j][0] + p[j][1] + p[j][2];
			int sum2 = p[j + 1][0] + p[j + 1][1] + p[j + 1][2];
			if (sum1 > sum2)
			{
				int* temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}


	//¥Ú”°
	printf("≈≈–Ú∫Û£∫\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}



	// Õ∑≈
	for (int i = 0; i < 3; i++)
	{
		free(p[i]);
		p[i] = NULL;
	}
	free(p);
	p = NULL;

	return EXIT_SUCCESS;
}