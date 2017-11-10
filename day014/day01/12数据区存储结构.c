#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int a;
int b = 20;
static int c;
static int d = 20;
const int g = 20;//常量区

int main1201()
{
	const int h = 20;//栈区
	static int e;
	static int f = 20;

	char * p = "hello world";//数据区-》字符串常量区
	//char p[] = "hello world";//栈区

	//printf("初始化数据：\n");
	//printf("%p\n", &b);
	//printf("%p\n", &d);
	//printf("%p\n", &f);
	//printf("未初始化数据：\n");
	//printf("%p\n", &a);
	//printf("%p\n", &c);
	//printf("%p\n", &e);

	//printf("常量区数据：\n");
	//printf("%p\n", p);

	printf("%p\n", &g);
	printf("%p\n", &h);

	return EXIT_SUCCESS;
}

int main1202(void)
{
	//char * p = "hello world";//常量区字符串

	//char * p1 = "hello world";
	//p[1] = 'a';//err

	char p1[] = "hello world";
	p1[1] = 'a';
	//char p2[] = "hello world";
	printf("%p\n", p1);
	//printf("%p\n", p2);

	printf("%s\n", p1);
	return 0;
}