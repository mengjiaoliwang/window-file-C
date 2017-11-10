#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/*
一个指针变量如果没有赋值
可以赋值为空指针
不能赋值为野指针
*/
int main201()
{
	/*
	野指针
	指针变量赋值为一个野指针程序不会报错
	操作野指针对应的空间会报错

	野指针可以用作于恶意修改其他程序的内存数据  需要绕过安全权限
	*/

	int a = 10;
	int* p = &a;

	//通过野指针改变未知空间的值
	//内存地址编号0-255被系统占用 不允许读写操作
	*p = 100;
	//printf("%d\n", *p);


	return EXIT_SUCCESS;
}

int main202(void)
{
	/*
	空指针
	操作空指针对应的空间会报错

	在程序开辟对空间后释放后置空，可以保证程序不输错

	*/
	//int* p = 开辟空间;

	//多次释放野指针的空间会报错

	//free(p);
	int *p;
	p = NULL;

	free(p);
	//赋值
	//*p = 100;
	//printf("%d\n", *p);
	printf("程序结束\n");
}