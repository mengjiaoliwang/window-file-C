#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main10()
{
	//数组  ->创建区域为栈区
	char buf[] = "hello world";
	//char * p = buf;
	//*p = 'A';
	//*(p + 1) = 'B';
	//指针 ->字符串常量区 不允许修改
	char * buf1 = "hello world";
	//char * p = buf1;
	//*p = 'A';
	//*(p + 1) = 'B';
	//char * p = buf;

	//printf("%s\n", buf);
	//printf("%s\n", buf1);
	printf("%p\n", buf);
	printf("%p\n", buf1);

	return EXIT_SUCCESS;
}