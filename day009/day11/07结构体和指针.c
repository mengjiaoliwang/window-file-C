#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//typedef Ϊ�ṹ�������
//typedef struct stu
//{
//	char name[21];
//	int age;
//	char sex;
//	int scores[3];
//}ss;//�ṹ�����

typedef struct stu
{
	char * name;
	int age;
	char sex;
	int * scores;
}ss;//�ṹ�����


int main0705()
{
	ss * s = (ss*)malloc(sizeof(ss) * 3);
	for (int i = 0; i < 3; i++)
	{
		s[i].name = (char *)malloc(sizeof(char) * 21);
		s[i].scores = (int *)malloc(sizeof(int) * 3);

		scanf("%s%d,%c", s[i].name, &s[i].age, &s[i].sex);
		scanf("%d%d%d", &s[i].scores[0], &s[i].scores[1], &s[i].scores[2]);

	}

	//��ӡ
	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n���䣺%d\n�Ա�%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "��" : "Ů");
		for (int j = 0; j < 3; j++)
			printf("�ɼ���%d\n", s[i].scores[j]);
	}


	//�ͷŶѿռ�
	for (int i = 0; i < 3; i++)
	{
		free(s[i].name);
		s[i].name = NULL;
		free(s[i].scores);
		s[i].scores = NULL;
	}


	free(s);
	s = NULL;

}


int main0704()
{
	//�ṹ���ԱΪָ��
	ss s;
	s.name = (char *)malloc(sizeof(char) * 21);
	strcpy(s.name, "����");
	s.age = 19;
	s.sex = 'M';
	s.scores = (int *)malloc(sizeof(int) * 3);
	s.scores[0] = 100;
	s.scores[1] = 66;
	s.scores[2] = 10;


		printf("������%s\n���䣺%d\n�Ա�%s\n",
			s.name, s.age, s.sex == 'M' ? "��" : "Ů");
		for (int j = 0; j < 3; j++)
			printf("�ɼ���%d\n", s.scores[j]);



	free(s.name);
	s.name = NULL;
	free(s.scores);
	s.scores = NULL;
	return 0;
}

int main0703(void)
{
	//�ṹ��ָ��ָ��ѿռ�
	ss * p = (ss*)malloc(sizeof(ss) * 3);
	for (int i = 0; i < 3; i++)
	{
		scanf("%s%d,%c", p[i].name, &p[i].age, &p[i].sex);
		scanf("%d%d%d", &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);
	}
	//��ӡ
	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n���䣺%d\n�Ա�%s\n",
			p[i].name, p[i].age, p[i].sex == 'M' ? "��" : "Ů");
		for (int j = 0; j < 3; j++)
			printf("�ɼ���%d\n", p[i].scores[j]);
	}

	free(p);
	p = NULL;
	return 0;
}
int main0702(void)
{
	//�����ṹ�����
	struct stu *p = (struct stu *)malloc(sizeof(struct stu));

	strcpy(p->name, "����");
	p->age = 19;
	p->sex = 'M';
	p->scores[0] = 10;
	p->scores[1] = 20;
	p->scores[2] = 30;
	printf("������%s\n", p->name);
	printf("���䣺%d\n", p->age);
	printf("�Ա�%s\n", p->sex == 'M' ? "��" : "Ů");
	printf("�ɼ���%d\n", p->scores[0]);
	printf("�ɼ���%d\n", p->scores[1]);
	printf("�ɼ���%d\n", p->scores[2]);


	free(p);
	return 0;
}
int main0701()
{
	//�ṹ�����
	struct stu s;

	//�ṹ��ָ�����
	//ָ����һ���ṹ������ĵ�ַ
	struct stu * p;
	p = &s;
	//�ṹ�������ֵ
	//strcpy(s.name, "����");
	//s.age = 19;
	//s.sex = 'M';
	//s.scores[0] = 10;
	//s.scores[1] = 20;
	//s.scores[2] = 30;

	strcpy(p->name, "����");
	p->age = 19;
	p->sex = 'M';
	p->scores[0] = 10;
	p->scores[1] = 20;
	p->scores[2] = 30;
	printf("������%s\n", p->name);
	printf("���䣺%d\n", p->age);
	printf("�Ա�%s\n", p->sex == 'M' ? "��" : "Ů");
	printf("�ɼ���%d\n", p->scores[0]);
	printf("�ɼ���%d\n", p->scores[1]);
	printf("�ɼ���%d\n", p->scores[2]);
	
	system("pause");
	return EXIT_SUCCESS;
}