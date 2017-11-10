#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun14(int **p)
{
	*p = (int *)malloc(sizeof(int) * 10);
}
int main14()
{
	int *p = NULL;
	fun14(&p);

	printf("%p\n", p);

	return EXIT_SUCCESS;
}