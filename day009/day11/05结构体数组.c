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
	//�ṹ�������ֵ���Խ���
	struct stu s[3];
	//int len = sizeof(s);
	//int len = sizeof(s[0]);
	printf("%d\n", sizeof(s) / sizeof(s[0]));
}
int main501()
{
	//�ṹ������
	struct stu s[3];
	
	//��ֵ
	for (int i = 0; i < 3; i++)
	{
		scanf("%s%d,%c", s[i].name, &s[i].age, &s[i].sex);
		for (int j = 0; j < 3; j++)
			scanf("%d", &s[i].scores[j]);
	}


	//��ӡ

	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n���䣺%d\n�Ա�%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "��" : "Ů");
		for (int j = 0; j < 3; j++)
			printf("�ɼ���%d\n", s[i].scores[j]);
	}



	return EXIT_SUCCESS;
}