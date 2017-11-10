#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun07(int a)
{
	if (a == 0)
		return;
	//a = a / 10;
	printf("%d\n", a % 10);
	fun07(a/10);
}
int main06()
{
	int val = 8793;
	fun07(val);

	return EXIT_SUCCESS;
}