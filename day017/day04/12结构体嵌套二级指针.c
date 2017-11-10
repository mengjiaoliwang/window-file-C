#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct stu
{
	char *name;
	int **scores;
}ss;

int main12()
{
	ss * p = (ss *)malloc(sizeof(ss) * 3);

	for (int i = 0; i < 3; i++)
	{
		printf("请输入学生姓名：\n");
		p[i].name = (char *)malloc(sizeof(char) * 21);
		scanf("%s", p[i].name);
		//期中成绩  期末成绩  平时成绩
		p[i].scores = (int **)malloc(sizeof(int*) * 3);
		for (int j = 0; j < 3; j++)
		{
			//三门成绩
			switch (j)
			{
			case 0:
				printf("请输入期中成绩:\n");
				break;
			case 1:
				printf("请输入期末成绩:\n");
				break;
			case 2:
				printf("请输入平时成绩:\n");
				break;
			}
			p[i].scores[j] = (int *)malloc(sizeof(int) * 3);
			scanf("%d%d%d", &p[i].scores[j][0], &p[i].scores[j][1], &p[i].scores[j][2]);
		}
	}


	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n", p[i].name);


		for (int j = 0; j < 3; j++)
		{
			switch (j)
			{
			case 0:
				printf("期中成绩:\n");
				break;
			case 1:
				printf("期末成绩:\n");
				break;
			case 2:
				printf("平时成绩:\n");
				break;
			}
			printf("成绩：%d\n", p[i].scores[j][0]);
			printf("成绩：%d\n", p[i].scores[j][1]);
			printf("成绩：%d\n", p[i].scores[j][2]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			free(p[i].scores[j]);
		}
		free(p[i].scores);
		free(p[i].name);
	}

	free(p);


	return EXIT_SUCCESS;
}