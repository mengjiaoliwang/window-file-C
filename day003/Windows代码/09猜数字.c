#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//ʹ�������
#include <time.h>

int main09()
{
	//�������������
	srand((unsigned int)time(NULL));
	//int i = 0;
	//while (i<100)
	//{
	//	int a = rand() % 100 + 1;//0-99+1
	//	printf("%d\n", a);
	//	i++;
	//}
	//���������
	int a = rand() % 100 + 1;//0-99+1
	int b;

	while (1)
	{
		printf("������1-100�ڵ�����\n");
		scanf("%d", &b);
		if (b > a)
		{
			printf("���������̫����!\n");
		}
		else if (b < a)
		{
			printf("���������̫С��!\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!\n");
			break;
		}
	}

	return EXIT_SUCCESS;
}