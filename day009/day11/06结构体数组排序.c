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
	printf("����ǰ��\n");
	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n���䣺%d\n�Ա�%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "��" : "Ů");
		for (int j = 0; j < 3; j++)
			printf("�ɼ���%d\n", s[i].scores[j]);
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


	//��ӡ
	printf("�����\n");
	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n���䣺%d\n�Ա�%s\n",
			s[i].name, s[i].age, s[i].sex == 'M' ? "��" : "Ů");
		for (int j = 0; j < 3; j++)
			printf("�ɼ���%d\n", s[i].scores[j]);
	}



	return EXIT_SUCCESS;
}