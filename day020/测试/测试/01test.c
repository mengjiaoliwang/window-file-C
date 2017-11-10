#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#include "mylib.h"
int main()
{
	int val = myadd(10, 20);

	printf("%d\n", val);
	val = mysub(20, 10);
	printf("%d\n", val);

	return EXIT_SUCCESS;
}