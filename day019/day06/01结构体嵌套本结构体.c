#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//结构体不能嵌套本结构体
//结构体能嵌套本结构体指针
struct stu
{
	//数据域
	char name[21];
	int age;

	//指针域  指向了下一个链表的节点
	struct stu *ss;
};

int main01()
{
	//静态链表

	struct stu s1 = { "张三",18,NULL };

	struct stu s2 = { "李四",20,NULL };

	struct stu s3 = { "王五",25,NULL };


	s1.ss = &s2;
	s2.ss = &s3;
	s3.ss = NULL;

	//printf("姓名：%s\n年龄：%d\n", s1.ss->name, s1.ss->age);

	struct stu * p = &s1;
	while (p != NULL)
	{
		printf("姓名：%s\n年龄：%d\n", p->name, p->age);
		p = p->ss;
	}


	return EXIT_SUCCESS;
}