#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main10()
{
	//大端对齐
	//int a = 10;
	//2c->0a
	//2d->00
	//2e->00
	//2f->00
	//小端对齐
	//高   ->  低
	//00 00 00 0a

	int a = 10.23;

	//printf("%d\n",sizeof(long long));
	printf("%p\n", &a);
	getchar();


	return EXIT_SUCCESS;
}