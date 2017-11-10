//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable:4996)

int main01(void)
{
	int a;
	float b;
	scanf("%d%f", &a,&b);
	printf("%d\n", a);
	printf("%.3f\n", b);
	return 0;
}