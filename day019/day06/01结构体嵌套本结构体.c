#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//�ṹ�岻��Ƕ�ױ��ṹ��
//�ṹ����Ƕ�ױ��ṹ��ָ��
struct stu
{
	//������
	char name[21];
	int age;

	//ָ����  ָ������һ������Ľڵ�
	struct stu *ss;
};

int main01()
{
	//��̬����

	struct stu s1 = { "����",18,NULL };

	struct stu s2 = { "����",20,NULL };

	struct stu s3 = { "����",25,NULL };


	s1.ss = &s2;
	s2.ss = &s3;
	s3.ss = NULL;

	//printf("������%s\n���䣺%d\n", s1.ss->name, s1.ss->age);

	struct stu * p = &s1;
	while (p != NULL)
	{
		printf("������%s\n���䣺%d\n", p->name, p->age);
		p = p->ss;
	}


	return EXIT_SUCCESS;
}