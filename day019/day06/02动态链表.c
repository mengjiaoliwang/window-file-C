#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct stu
{
	char name[21];
	int age;

	struct stu * next;
};


int main02()
{
	struct stu * s1 = (struct stu *)malloc(sizeof(struct stu));
	strcpy(s1->name, "张三");
	s1->age = 18;
	s1->next = NULL;

	struct stu * s2 = (struct stu *)malloc(sizeof(struct stu));
	strcpy(s2->name, "李四");
	s2->age = 20;
	s2->next = NULL;

	struct stu * s3 = (struct stu *)malloc(sizeof(struct stu));
	strcpy(s3->name, "王五");
	s3->age = 22;
	s3->next = NULL;

	s1->next = s2;
	s2->next = s3;
	s3->next = NULL;

	//方便计算
	/*
	前驱  链表的前指向 

	后继  链表的后指向 

	头节点没有前驱
	尾节点没有后继
	中间节点有一个前驱和一个后继   成为单向链表
	*/
	struct stu * head = (struct stu*)malloc(sizeof(struct stu));
	head->next = s1;

	struct stu * p = head->next;

	while (p != NULL)
	{
		printf("姓名:%s\n年龄：%d\n", p->name, p->age);
		p = p->next;
	}


	return EXIT_SUCCESS;
}