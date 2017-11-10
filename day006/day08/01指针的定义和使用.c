#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main01()
{
	/*
	指针指向变量的地址
	指针变量也是一个变量
	内存地址是一个unsigned int 十六进制数表示
	*/

	//int a = 10;
	////printf("%p\n",&a);
	//int* p;
	//p = &a;
	////printf("%p\n", p);
	////可以通过地址改变变量的地址
	//*p = 100;
	//printf("%d\n", *p);
	//printf("%d\n", a);


	//char a = 'a';
	//char* p = &a;
	//*p = 99;
	//printf("%c\n", a);

	/*
	指针类型大小：
	在32位操作系统下都是4个字节大小
	在64位操作系统下都是8个字节大小
	*/
	//int a = 10;
	//int* p = &a;
	printf("指针大小：%d\n", sizeof(double*));
	printf("指针大小：%d\n", sizeof(long*));
	printf("指针大小：%d\n", sizeof(long long*));
	printf("指针大小：%d\n", sizeof(short*));
	printf("指针大小：%d\n", sizeof(char*));
	printf("指针大小：%d\n", sizeof(int*));
	printf("指针大小：%d\n", sizeof(int******));
	printf("指针大小：%d\n", sizeof(int*************));


	return EXIT_SUCCESS;
}