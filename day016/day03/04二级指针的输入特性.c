#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void fun01(int **p)
{
	for (int i = 0; i < 10; i++)
	{
		p[i] = malloc(sizeof(int) * 3);
		for (int j = 0; j < 3; j++)
		{
			p[i][j] = i + j;
		}
	}
}
int main04()
{
	//ÊäÈëÌØÐÔ 
	int ** p = malloc(sizeof(int*) * 10);
	fun01(p);


	for (int i = 0; i < 10; i++)
	{
		//printf("%p\n", p[i]);
		for (int j = 0; j < 3; j++)
			printf("%d\t", p[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 10; i++)
	{
		free(p[i]);
		p[i] = NULL;
	}
	free(p);
	p = NULL;

	return EXIT_SUCCESS;
}