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
	strcpy(s1->name, "����");
	s1->age = 18;
	s1->next = NULL;

	struct stu * s2 = (struct stu *)malloc(sizeof(struct stu));
	strcpy(s2->name, "����");
	s2->age = 20;
	s2->next = NULL;

	struct stu * s3 = (struct stu *)malloc(sizeof(struct stu));
	strcpy(s3->name, "����");
	s3->age = 22;
	s3->next = NULL;

	s1->next = s2;
	s2->next = s3;
	s3->next = NULL;

	//�������
	/*
	ǰ��  �����ǰָ�� 

	���  ����ĺ�ָ�� 

	ͷ�ڵ�û��ǰ��
	β�ڵ�û�к��
	�м�ڵ���һ��ǰ����һ�����   ��Ϊ��������
	*/
	struct stu * head = (struct stu*)malloc(sizeof(struct stu));
	head->next = s1;

	struct stu * p = head->next;

	while (p != NULL)
	{
		printf("����:%s\n���䣺%d\n", p->name, p->age);
		p = p->next;
	}


	return EXIT_SUCCESS;
}