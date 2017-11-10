#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main13()
{

	printf("hello world1\n");
	goto HELLO;
	printf("hello world2\n");
	printf("hello world3\n");
	printf("hello world4\n");
	return EXIT_SUCCESS;
	HELLO:
	printf("hello world5\n");
	printf("hello world6\n");
}