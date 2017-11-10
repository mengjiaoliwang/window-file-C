#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>


void BubbleSort(int * src, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (src[j] > src[j + 1])
			{
				int temp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = temp;
			}
		}
	}
}


int main10()
{
	srand((unsigned int)time(NULL));
	int  *p = (int *)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
	{
		p[i] = rand() % 100;
	}
	printf("ÅÅÐòÇ°£º\n");
	for (int i = 0; i < 10; i++)
		printf("%d\n", *(p + i));
	BubbleSort(p, 10);
	printf("ÅÅÐòºó£º\n");
	for (int i = 0; i < 10; i++)
		printf("%d\n", *(p + i));
	
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *p);
	//	p++;
	//}
	free(p);
	p = NULL;
	//free(p);


	//int *p = (int*)malloc(sizeof(int*) * 10);/err;

	return EXIT_SUCCESS;
}
