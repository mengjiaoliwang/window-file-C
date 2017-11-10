#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


struct stu
{
	char * name;
	int age;
	int *scores;
};
int main1101()
{
	struct stu ss;
	ss.name = (char *)malloc(sizeof(char) * 21);
	ss.scores = (int*)malloc(sizeof(int) * 3);
	strcpy(ss.name, "张三");
	ss.scores[0] = 100;
	ss.scores[1] = 99;
	ss.scores[2] = 89;
	ss.age = 18;



	printf("姓名：%s\n", ss.name);
	printf("年龄：%d\n", ss.age);
	printf("成绩：%d\n", ss.scores[0]);
	printf("成绩：%d\n", ss.scores[1]);
	printf("成绩：%d\n", ss.scores[2]);

	if (ss.name != NULL)
	{
		free(ss.name);
		ss.name = NULL;
	}

	free(ss.scores);
	ss.scores = NULL;


	return EXIT_SUCCESS;
}

int main1102(void)
{
	struct stu * p = (struct stu *)malloc(sizeof(struct stu) * 3);
	for (int i = 0; i < 3; i++)
	{
		(p + i)->name = (char *)malloc(sizeof(char) * 21);
		p[i].scores = (int*)malloc(sizeof(int) * 3);

		scanf("%s%d%d%d%d", p[i].name, &p[i].age, &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);
		//p[i].name
	}

	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n", p[i].name);
		printf("年龄：%d\n", p[i].age);
		printf("成绩：%d\n", p[i].scores[0]);
		printf("成绩：%d\n", p[i].scores[1]);
		printf("成绩：%d\n", p[i].scores[2]);
	}


	for (int i = 0; i < 3; i++)
	{
		free(p[i].name);
		free(p[i].scores);
	}

	free(p);

	return 0;
}