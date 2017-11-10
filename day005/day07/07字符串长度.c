#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{
	char buf[100] = "hello\0 world";
	//大小:求出字符串在内存中占的字节
	//int len = sizeof(buf);//100
	//长度:求出\0之前的有效字符
	printf("%d", strlen(buf));


	return EXIT_SUCCESS;
}