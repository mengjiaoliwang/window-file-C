#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main06()
{
	int weight[10];
	int size = sizeof(weight) / sizeof(weight[0]);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &weight[i]);
	}
	//���ص�С��
	int max = weight[0];
	//�ҵ���Ӧ�±�
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < weight[i])
		{
			max = weight[i];
			index = i;
		}
	}
	printf("���ص�С��Ϊ��%d�� ����Ϊ��%d\n", index + 1, max);

	return EXIT_SUCCESS;
}