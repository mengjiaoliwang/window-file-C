#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct stu
{
	char name[21];
	int age;
	char sex;
	int score;
}ss;
//�ṹ�������Ϊ��������
//void fun01(ss s)
//{
//	strcpy(s.name, "�ܲ�");
//	s.age = 50;
//	s.sex = 'M';
//	s.score = 100;
//}
//�ṹ��ָ����Ϊ��������
//void fun02(ss* s)
//{
//	strcpy(s->name, "��ا");
//	s->age = 40;
//	s->sex = 'M';
//	s->score = 100;
//}
//�ṹ�����ָ����Ϊ��������
void fun03(ss** s)
{
	*s = malloc(sizeof(ss));
	strcpy((*s)->name, "������");
	(*s)->age = 40;
	(*s)->sex = 'F';
	(*s)->score = 100;
}
//�ṹ����Ϊ�����ķ���ֵ
ss * fun04()
{
	ss *s = (ss*)malloc(sizeof(ss));
	//printf("%p\n", s);
	return s;
}
//const���εĽṹ������  
//�����޸Ľṹ��ָ�������ֵ
//�������޸Ľṹ��ָ�����ָ���ֵ
void fun05(const ss * s)
{
	s = (ss*)malloc(sizeof(ss));//ok
	//s->age = 20;/err
	//strcpy(s->name, "˾����");

	//printf("%s\n", s->name);
}
//const ���νṹ�����
//�ܸı�ָ�����ָ���ֵ
//�����޸�ָ�������ֵ
void fun06(ss * const s)
{
	//s = (ss*)malloc(sizeof(ss));/err
	s->age = 20;//ok
	printf("%d\n", s->age);
}
//const���νṹ������const���νṹ�����
void fun07(const ss * const s)
{
	//s = (ss*)malloc(sizeof(ss));//err
	//s->age = 18;//err

}
int main0803()
{
	ss s = { "��ˬ",18,'F',88 };
	fun06(&s);

}
int main0802()
{
	ss * s = NULL;
	s = fun04();

	strcpy(s->name, "��ֲ");
	s->age = 40;
	s->sex = 'M';
	s->score = 101;

	//printf("%p\n", s);

	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%s\n", s->sex == 'M' ? "��" : "Ů");
	printf("%d\n", s->score);
}
int main0801()
{
	//ss s = { NULL };
	ss* s = NULL;
	fun03(&s);
	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%s\n", s->sex == 'M' ? "��" : "Ů");
	printf("%d\n", s->score);


	free(s);
	return EXIT_SUCCESS;
}