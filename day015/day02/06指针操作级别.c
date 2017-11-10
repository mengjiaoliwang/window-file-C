#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun04(int **p)
{
	//*p = 100;
	*p = malloc(4);
	**p = 100;
}

int main06()
{
	//int a = 0;
	int *p = NULL;
	fun04(&p);

	printf("%d\n", *p);

	free(p);

	return EXIT_SUCCESS;
}