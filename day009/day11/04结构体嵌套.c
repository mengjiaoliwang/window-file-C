#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct info
{
	double weight;//8
	int age;//4
	char name[15];//
	char sex;//1
};
//�ṹ��Ƕ��

struct stu
{
	struct info i;//32
	int scores[3];//12
}s;//�ṹ�������


int main403(void)
{
	//int len = sizeof(s);
	//printf("%d\n", len);


	printf("weight:%p\n", &s.i.weight);
	printf("age:%p\n", &s.i.age);
	printf("name:%p\n", s.i.name);
	printf("sex:%p\n", &s.i.sex);
	printf("score[0]:%p\n", &s.scores[0]);
	printf("score[1]:%p\n", &s.scores[1]);
	printf("score[2]:%p\n", &s.scores[2]);


	return 0;
}

//���п���Ϣ
//struct record
//{
//	int time;
//	char add[200];
//	float money;
//};
//
//struct Card
//{
//	char No[18];
//	char name[21];
//	float money;
//	struct record rec;
//}card;
//
//int main()
//{
//	card.money = 10000;
//	card.rec.money = 100;
//}

//��Ϸ������Ϣ
//struct skills
//{
//	char skill_name[21];
//	float skill_cd;
//	int skill_mp;
//	int dps;
//};
//
//struct Role
//{
//	char name[21];
//	int Num;
//	int level;
//	int hp;
//	int mp;
//	struct skills sk;
//};

int main402()
{
	scanf("%s%d,%c", s.i.name, &s.i.age, &s.i.sex);

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &s.scores[i]);
	}

	printf("������%s\n", s.i.name);
	printf("�Ա�%s\n", s.i.sex == 'M' ? "��" : "Ů");
	printf("���䣺%d\n", s.i.age);
	printf("�ɼ�1��%d\n", s.scores[0]);
	printf("�ɼ�2��%d\n", s.scores[1]);
	printf("�ɼ�3��%d\n", s.scores[2]);
}
int main0401()
{

	//s.i.name = "л����";
	strcpy(s.i.name, "л����");
	s.i.age = 19;
	s.i.sex = 'M';
	s.scores[0] = 100;
	s.scores[1] = 1000;
	s.scores[2] = 10;


	printf("������%s\n", s.i.name);
	printf("�Ա�%s\n", s.i.sex == 'M' ? "��" : "Ů");
	printf("���䣺%d\n", s.i.age);
	printf("�ɼ�1��%d\n", s.scores[0]);
	printf("�ɼ�2��%d\n", s.scores[1]);
	printf("�ɼ�3��%d\n", s.scores[2]);

	return EXIT_SUCCESS;
}