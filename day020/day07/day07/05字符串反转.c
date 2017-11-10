#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void fun06(char * buf)
{
	if (*buf == '\0')
		return;
	fun06(buf + 1);
	printf("%c", *buf);
}

int main05()
{
	char buf[] = "hello world";

	fun06(buf);
	return EXIT_SUCCESS;
}