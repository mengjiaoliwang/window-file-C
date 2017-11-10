#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct stu
{
	char * name;
	int age;
};

int main13()
{
	//int a = 10;
	//int b = a;
	//a = 100;


	//printf("%d\n", a);
	//printf("%d\n", b);


	/*
	深拷贝->内容

	浅拷贝->地址
	*/
	struct stu ss;

	ss.name = (char *)malloc(sizeof(char) * 21);

	strcpy(ss.name, "张三");
	ss.age = 18;
	struct stu s1;
	s1.name = (char *)malloc(sizeof(char) * 21);
	//s1 = ss;
	strcpy(s1.name, ss.name);
	//memcpy(s1.name, ss.name, strlen(ss.name) + 1);
	s1.age = ss.age;

	printf("姓名：%s\n", s1.name);
	printf("年龄：%d\n", s1.age);
	strcpy(ss.name, "李四");
	ss.age = 20;

	printf("姓名：%s\n", s1.name);
	printf("年龄：%d\n", s1.age);

	return EXIT_SUCCESS;
}