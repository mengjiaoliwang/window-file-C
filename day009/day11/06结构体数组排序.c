#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


struct stu
{
	char name[21];//24
	int age;//4
	char sex;//4
	int scores[3];//12
};

int main06()
{
	//结构体数组
	struct stu s[3];

	//赋值
	for (int i = 0; i < 3; i++)
	{
		scanf("%s%d,%c", s[i].name, &s[i].age, &s[i].sex);
		for (int j = 0; j < 3; j++)
			scanf("%d", &s[i].scores[j]);
	}

	//打印
	printf("排序前：\n");
	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n年龄：%d\n性别：%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "男" : "女");
		for (int j = 0; j < 3; j++)
			printf("成绩：%d\n", s[i].scores[j]);
	}
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			int sum1 = s[j].scores[0] + s[j].scores[1] + s[j].scores[2];
			int sum2 = s[j + 1].scores[0] + s[j + 1].scores[1] + s[j + 1].scores[2];
			if (sum1 > sum2)
			{
				struct stu temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}


	//打印
	printf("排序后：\n");
	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n年龄：%d\n性别：%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "男" : "女");
		for (int j = 0; j < 3; j++)
			printf("成绩：%d\n", s[i].scores[j]);
	}



	return EXIT_SUCCESS;
}