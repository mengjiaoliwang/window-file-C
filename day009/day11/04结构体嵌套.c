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
//结构体嵌套

struct stu
{
	struct info i;//32
	int scores[3];//12
}s;//结构体变量名


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

//银行卡信息
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

//游戏人物信息
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

	printf("姓名：%s\n", s.i.name);
	printf("性别：%s\n", s.i.sex == 'M' ? "男" : "女");
	printf("年龄：%d\n", s.i.age);
	printf("成绩1：%d\n", s.scores[0]);
	printf("成绩2：%d\n", s.scores[1]);
	printf("成绩3：%d\n", s.scores[2]);
}
int main0401()
{

	//s.i.name = "谢广坤";
	strcpy(s.i.name, "谢广坤");
	s.i.age = 19;
	s.i.sex = 'M';
	s.scores[0] = 100;
	s.scores[1] = 1000;
	s.scores[2] = 10;


	printf("姓名：%s\n", s.i.name);
	printf("性别：%s\n", s.i.sex == 'M' ? "男" : "女");
	printf("年龄：%d\n", s.i.age);
	printf("成绩1：%d\n", s.scores[0]);
	printf("成绩2：%d\n", s.scores[1]);
	printf("成绩3：%d\n", s.scores[2]);

	return EXIT_SUCCESS;
}