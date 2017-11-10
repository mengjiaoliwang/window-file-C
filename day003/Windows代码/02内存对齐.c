#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main02()
{
	//int a = 10;
	////%p打印数据在内存中的地址  默认是以十六进制数显示
	////&取地址符号
	//printf("%p\n", &a);


	////程序运行结束，数据会在内存中释放
	getchar();

	//float a = 3.0f;
	float a = 3.f;
	double b = .2f;
	printf("%.1f\n", a);
	printf("%.1f\n", b);
	return EXIT_SUCCESS;
}