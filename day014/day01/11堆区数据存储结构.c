#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main11()
{
	int *p = (int*)malloc(12);

	printf("%p\n", p);
	printf("%p\n", &p[0]);
	printf("%p\n", &p[1]);

	return EXIT_SUCCESS;
}