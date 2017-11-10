#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void fun02(int **p)
{
	*p = (int *)malloc(sizeof(int) * 10);
}
int main05()
{
	int *p = NULL;
	fun02(&p);

	for (int i = 0; i < 10; i++)
		p[i] = i;


	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);


	free(p);


	return EXIT_SUCCESS;
}