#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>

int main0301()
{

	int a = 10;
	int b = 20;
	int *p = &a;
	int **p1 = &p;
	*p1 = &b;
	**p1 = 100;

	return EXIT_SUCCESS;
}

int main0302()
{
	//���Խ�����ָ�����Ϊ��ά����
	//�����Խ���ά�������Ϊ����ָ��
	srand((unsigned int)time(NULL));
	int ** p = (int**)malloc(sizeof(int*) * 10);
	for (int i = 0; i < 10; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * 3);
		for (int j = 0; j < 3; j++)
		{
			p[i][j] = rand() % 100;//0-99
			//*(*(p + i) + j) = rand() % 100;
			//*(p[i] + j) = rand() % 100;
		}
	}


	for (int i = 0; i < 10; i++)
	{

		printf("%p:\t", p[i]);
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}


	//free(p[0]);
	for (int i = 0; i < 10; i++)
	{
		free(p[i]);
		p[i] = NULL;
	}

	free(p);

	return 0;
}


typedef struct stu
{
	char name[21];
	int age;
}ss;
int main0303(void)
{
	//�ṹ�����ָ��
	ss **p = (ss **)malloc(sizeof(ss*) * 3);

	for (int i = 0; i < 3; i++)
	{
		//�ṹ��ָ��
		p[i] = (ss*)malloc(sizeof(ss) * 3);
		//1���2��ѧ����Ϣ
		//p[0][1].name
		//(*(p+0)+1)->name
		//(p[0]+1)->name
		for (int j = 0; j < 3; j++)
		{
			//p[i][j]�ṹ�����
			scanf("%s%d", p[i][j].name, &p[i][j].age);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//(*(p+i)+j)  (p[i]+j)�ṹ��ָ��   
			printf("������%s\t���䣺%d\n", (*(p + i) + j)->name, (p[i] + j)->age);
		}
	}

	return 0;

}