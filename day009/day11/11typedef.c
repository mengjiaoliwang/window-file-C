#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//1、为已有的数据类型起别名  2、为函数起别名定义函数指针类型
typedef unsigned long long ull;

typedef struct StudentInfoList sil;
struct StudentInfoList
{
	char name[21];
	int age;
};

int main()
{
	//auto ull a = 10;
	//auto unsigned long long b = 20;
	sil s;
	strcpy(s.name, "孟艳东");
	s.age = 88;
	printf("姓名：%s\n", s.name);
	printf("年龄：%d\n", s.age);

	system("pause");
	return EXIT_SUCCESS;
}