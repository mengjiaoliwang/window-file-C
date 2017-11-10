#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//为数据类型起别名
typedef unsigned long long ull;

//typedef 只能为已存在的数据类型起别名
typedef struct stu
{
	char name[21];
	int age;
}s;

int main03()
{
	ull  a = 10;

	printf("%d\n", a);
	s s1;
	strcpy(s1.name, "王强");
	return EXIT_SUCCESS;
}