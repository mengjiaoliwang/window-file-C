#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main301()
{
	/*
	修改了一个指针变量对应内存的值 ，其他指针变量指向的值也发生改变
	*/
	int a = 10;
	int *p1 = &a;
	int *p2 = &a;
	int *p3 = &a;

	*p3 = 100;


	printf("%d\n", a);
	printf("%d\n", *p1);
	printf("%d\n", *p2);
	printf("%d\n", *p3);

	return EXIT_SUCCESS;
}

int main302(void)
{
	int a = 10;
	//char * p = &a;

	//*p = 123456;
	/*
	直接使用void不能在内存中存储数据
	void * 可以的  成为万能指针
	通过void*去修改变量的值 需要先转成变量对应的类型 *
	*/
	void * p = &a;

	//*(int*)p = 100;

	printf("%d\n", *(int*)p);
	//printf("%d\n", a);
	//printf("%d\n", sizeof(void *));

	return 0;
}

int main303(void)
{
	/*
	任何类型的指针都是通用的，需要强制转换成变量对应的指针类型
	*/
	int a = 10;
	char *p = &a;

	*(int *)p = 123456;
	printf("%d\n", a);

	return 0;
}

