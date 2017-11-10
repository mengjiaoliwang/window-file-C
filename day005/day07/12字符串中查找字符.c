#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main12()
{
	char buf[] = "hello world";
	char ch = 'm';

	//找到返回第一次出现位置
	//找不到返回NULL
	char * p = strchr(buf, ch);

	printf("%s", p);

	return EXIT_SUCCESS;
}