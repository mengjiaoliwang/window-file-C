#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun03(int a, int b)
{
	printf("%d\n", a + b);
}
void fun04(int a, int b)
{
	printf("%d\n", a - b);
}

int main06()
{
	int(*opt)(int, int) = fun03;
	opt(10, 20);


	system("pause");
	return EXIT_SUCCESS;
}