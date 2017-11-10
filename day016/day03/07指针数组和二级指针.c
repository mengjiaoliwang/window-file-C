#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{
	//指针数组
	//buf[0]是栈区的指针变量，指向了数据区字符串常量区的地址，其值可以改变 
	//buf[0][0]是字符串常量区的内存单元，不能修改
	char * buf[3] = { "hello","world","dabaobei" };
	//二级指针指向了指针数组
	char **p = buf;


	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", p[i]);
		//printf("%s\n", *(p+i));
	}
	//char * p = "hello";
	//buf[0] = buf[1];
	//buf[0][0] = 'w';

	//printf("%s\n", buf[0]);
	//printf("%p\n", buf[0]);
	//printf("%p\n", p);
	//printf("%p\n", buf[2]);


	return EXIT_SUCCESS;
}