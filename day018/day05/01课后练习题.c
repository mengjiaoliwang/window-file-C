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
	strcpy(ss[0].name.FirstName, "��");
	strcpy(ss[0].name.LastName, "��");

	strcpy(ss[1].name.FirstName, "��");
	strcpy(ss[1].name.LastName, "��");

	strcpy(ss[2].name.FirstName, "÷");
	strcpy(ss[2].name.LastName, "��");

	strcpy(ss[3].name.FirstName, "ʢ");
	strcpy(ss[3].name.LastName, "��ʿ");



	for (int i = 0; i < 4; i++)
	{
		printf("���������%d��ѧ�������ųɼ����м��ÿո�ֿ���\n", i + 1);
		scanf("%f%f%f", &ss[i].grade[0], &ss[i].grade[1], &ss[i].grade[2]);
		ss[i].avg = (ss[i].grade[0] + ss[i].grade[1] + ss[i].grade[2]) / 3;

	}

	for (int i = 0; i < 4; i++)
	{
		printf("������%s%s\n", ss[i].name.FirstName, ss[i].name.LastName);
		printf(" �ɼ�1��%.2f", ss[i].grade[0]);
		printf(" �ɼ�2��%.2f", ss[i].grade[1]);
		printf(" �ɼ�3��%.2f", ss[i].grade[2]);
		printf(" ƽ���ɼ���%.2f\n", ss[i].avg);
	}


	return EXIT_SUCCESS;
}