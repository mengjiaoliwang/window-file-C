#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


struct Name
{
	char LastName[21];
	char FirstName[11];
};
struct Student
{
	struct Name name;
	float grade[3];
	float avg;
};


int main01()
{
	struct Student ss[4];
	strcpy(ss[0].name.FirstName, "张");
	strcpy(ss[0].name.LastName, "三");

	strcpy(ss[1].name.FirstName, "赵");
	strcpy(ss[1].name.LastName, "四");

	strcpy(ss[2].name.FirstName, "梅");
	strcpy(ss[2].name.LastName, "六");

	strcpy(ss[3].name.FirstName, "盛");
	strcpy(ss[3].name.LastName, "七士");



	for (int i = 0; i < 4; i++)
	{
		printf("请您输入第%d名学生的三门成绩（中间用空格分开）\n", i + 1);
		scanf("%f%f%f", &ss[i].grade[0], &ss[i].grade[1], &ss[i].grade[2]);
		ss[i].avg = (ss[i].grade[0] + ss[i].grade[1] + ss[i].grade[2]) / 3;

	}

	for (int i = 0; i < 4; i++)
	{
		printf("姓名：%s%s\n", ss[i].name.FirstName, ss[i].name.LastName);
		printf(" 成绩1：%.2f", ss[i].grade[0]);
		printf(" 成绩2：%.2f", ss[i].grade[1]);
		printf(" 成绩3：%.2f", ss[i].grade[2]);
		printf(" 平均成绩：%.2f\n", ss[i].avg);
	}


	return EXIT_SUCCESS;
}