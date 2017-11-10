#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//typedef 为结构体起别名
//typedef struct stu
//{
//	char name[21];
//	int age;
//	char sex;
//	int scores[3];
//}ss;//结构体别名

typedef struct stu
{
	char * name;
	int age;
	char sex;
	int * scores;
}ss;//结构体别名


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

	//打印
	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n年龄：%d\n性别：%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "男" : "女");
		for (int j = 0; j < 3; j++)
			printf("成绩：%d\n", s[i].scores[j]);
	}


	//释放堆空间
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
	//结构体成员为指针
	ss s;
	s.name = (char *)malloc(sizeof(char) * 21);
	strcpy(s.name, "张三");
	s.age = 19;
	s.sex = 'M';
	s.scores = (int *)malloc(sizeof(int) * 3);
	s.scores[0] = 100;
	s.scores[1] = 66;
	s.scores[2] = 10;


		printf("姓名：%s\n年龄：%d\n性别：%s\n",
			s.name, s.age, s.sex == 'M' ? "男" : "女");
		for (int j = 0; j < 3; j++)
			printf("成绩：%d\n", s.scores[j]);



	free(s.name);
	s.name = NULL;
	free(s.scores);
	s.scores = NULL;
	return 0;
}

int main0703(void)
{
	//结构体指针指向堆空间
	ss * p = (ss*)malloc(sizeof(ss) * 3);
	for (int i = 0; i < 3; i++)
	{
		scanf("%s%d,%c", p[i].name, &p[i].age, &p[i].sex);
		scanf("%d%d%d", &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);
	}
	//打印
	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n年龄：%d\n性别：%s\n",
			p[i].name, p[i].age, p[i].sex == 'M' ? "男" : "女");
		for (int j = 0; j < 3; j++)
			printf("成绩：%d\n", p[i].scores[j]);
	}

	free(p);
	p = NULL;
	return 0;
}
int main0702(void)
{
	//堆区结构体变量
	struct stu *p = (struct stu *)malloc(sizeof(struct stu));

	strcpy(p->name, "张三");
	p->age = 19;
	p->sex = 'M';
	p->scores[0] = 10;
	p->scores[1] = 20;
	p->scores[2] = 30;
	printf("姓名：%s\n", p->name);
	printf("年龄：%d\n", p->age);
	printf("性别：%s\n", p->sex == 'M' ? "男" : "女");
	printf("成绩：%d\n", p->scores[0]);
	printf("成绩：%d\n", p->scores[1]);
	printf("成绩：%d\n", p->scores[2]);


	free(p);
	return 0;
}
int main0701()
{
	//结构体变量
	struct stu s;

	//结构体指针变量
	//指向了一个结构体变量的地址
	struct stu * p;
	p = &s;
	//结构体变量赋值
	//strcpy(s.name, "张三");
	//s.age = 19;
	//s.sex = 'M';
	//s.scores[0] = 10;
	//s.scores[1] = 20;
	//s.scores[2] = 30;

	strcpy(p->name, "张三");
	p->age = 19;
	p->sex = 'M';
	p->scores[0] = 10;
	p->scores[1] = 20;
	p->scores[2] = 30;
	printf("姓名：%s\n", p->name);
	printf("年龄：%d\n", p->age);
	printf("性别：%s\n", p->sex == 'M' ? "男" : "女");
	printf("成绩：%d\n", p->scores[0]);
	printf("成绩：%d\n", p->scores[1]);
	printf("成绩：%d\n", p->scores[2]);
	
	system("pause");
	return EXIT_SUCCESS;
}