#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//ss��ʾ�ṹ����������

struct scores
{
	int cl;
	int cpp;
	int cs;
};
typedef struct stu
{
	//�ṹ���Ա�б�
	char name[21];
	int age;
	struct scores score;
}ss;

int main0801()
{
	ss s1;

	strcpy(s1.name, "����");
	s1.age = 18;


	printf("������%s\n", s1.name);
	printf("���䣺%d\n", s1.age);

	return EXIT_SUCCESS;
}
int main0802(void)
{
	//�ṹ������
	ss s[3] = 
	{
		{"����",18},
		{.age=18,.name="����"},
		{"��ǿ",19}
	};
	//�ṹ��ָ��
	ss * p = s;

	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(s));


	for (int i = 0; i < 3; i++)
	{
		//�ṹ�����
		//printf("������%s\n", p[i].name);
		//printf("���䣺%d\n", p[i].age);
		//�ṹ��ָ��
		printf("������%s\n", (p + i)->name);
		printf("���䣺%d\n", (p + i)->age);
	}

}

int main0803(void)
{
	ss * p = (ss *)malloc(sizeof(ss) * 3);
	for (int i = 0; i < 3; i++)
	{
		scanf("%s%d", p[i].name, &(p + i)->age);
	}

	for (int i = 0; i < 3; i++)
	{
		//�ṹ�����
		//printf("������%s\n", p[i].name);
		//printf("���䣺%d\n", p[i].age);
		//�ṹ��ָ��
		printf("������%s\n", (p + i)->name);
		printf("���䣺%d\n", (p + i)->age);
	}

	free(p);

	return 0;
}

int main0804(void)
{
	//ss s = { "����",18,.score.cl = 100,.score.cpp = 99,.score.cs = 88 };
	ss s = { "����",18,100,99,88};

	printf("������%s\n", s.name);
	printf("���䣺%d\n", s.age);
	printf("�ɼ���%d\n", s.score.cl);
	printf("�ɼ���%d\n", s.score.cpp);
	printf("�ɼ���%d\n", s.score.cs);

	return 0;
}