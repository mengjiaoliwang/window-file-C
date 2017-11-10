#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//ss表示结构体数据类型

struct scores
{
	int cl;
	int cpp;
	int cs;
};
typedef struct stu
{
	//结构体成员列表
	char name[21];
	int age;
	struct scores score;
}ss;

int main0801()
{
	ss s1;

	strcpy(s1.name, "张三");
	s1.age = 18;


	printf("姓名：%s\n", s1.name);
	printf("年龄：%d\n", s1.age);

	return EXIT_SUCCESS;
}
int main0802(void)
{
	//结构体数组
	ss s[3] = 
	{
		{"张三",18},
		{.age=18,.name="李四"},
		{"王强",19}
	};
	//结构体指针
	ss * p = s;

	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(s));


	for (int i = 0; i < 3; i++)
	{
		//结构体变量
		//printf("姓名：%s\n", p[i].name);
		//printf("年龄：%d\n", p[i].age);
		//结构体指针
		printf("姓名：%s\n", (p + i)->name);
		printf("年龄：%d\n", (p + i)->age);
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
		//结构体变量
		//printf("姓名：%s\n", p[i].name);
		//printf("年龄：%d\n", p[i].age);
		//结构体指针
		printf("姓名：%s\n", (p + i)->name);
		printf("年龄：%d\n", (p + i)->age);
	}

	free(p);

	return 0;
}

int main0804(void)
{
	//ss s = { "张三",18,.score.cl = 100,.score.cpp = 99,.score.cs = 88 };
	ss s = { "张三",18,100,99,88};

	printf("姓名：%s\n", s.name);
	printf("年龄：%d\n", s.age);
	printf("成绩：%d\n", s.score.cl);
	printf("成绩：%d\n", s.score.cpp);
	printf("成绩：%d\n", s.score.cs);

	return 0;
}