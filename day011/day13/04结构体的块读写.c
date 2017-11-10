#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


typedef struct student
{
	char name[21];
	int age;
	char sex;
	int score;
}stu;
int main0401()
{
	stu s[3];

	FILE * fp = fopen("../../e.txt", "w");
	if (!fp)
		return -1;
	for (int i = 0; i < 3; i++)
	{
		scanf("%s%d,%c%d", s[i].name, &s[i].age, &s[i].sex, &s[i].score);
	}

	for (int i = 0; i < 3; i++)
	{
		fwrite(&s[i], sizeof(stu), 1, fp);
	}


	fclose(fp);

	return EXIT_SUCCESS;
}

int main0402(void)
{
	stu s[3];
	FILE * fp = fopen("../../e.txt", "r");
	if (!fp)
		return -1;
	int i = 0;
	while (!feof(fp))
	{
		fread(&s[i], sizeof(stu), 1, fp);
		i++;
	}

	for (int i = 0; i < 3; i++)
	{

		printf("姓名：%s\n年龄：%d\n性别：%s\n成绩：%d\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "男" : "女", s[i].score);

	}

	fclose(fp);
	return 0;
}