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

int main502()
{
	//结构体变量的值可以交换
	struct stu s[3];
	//int len = sizeof(s);
	//int len = sizeof(s[0]);
	printf("%d\n", sizeof(s) / sizeof(s[0]));
}
int main501()
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

	for (int i = 0; i < 3; i++)
	{
		printf("姓名：%s\n年龄：%d\n性别：%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "男" : "女");
		for (int j = 0; j < 3; j++)
			printf("成绩：%d\n", s[i].scores[j]);
	}



	return EXIT_SUCCESS;
}