#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0301()
{
	int arr[][3] = { 1,2,3,4,5,6,7 };


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}

	return EXIT_SUCCESS;
}
int main0302(void)
{
	int arr[][3] = { 1,2,3,4,5,6,7,8 };

	//��ά���������С
	printf("%d\n", sizeof(arr));
	//��ά�������д�С
	printf("%d\n", sizeof(arr[0]));
	//��ά����Ԫ�ش�С
	printf("%d\n", sizeof(arr[0][0]));

	//����
	int row = sizeof(arr) / sizeof(arr[0]);
	//����
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("������%d\n", row);
	printf("������%d\n", col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}

	return 0;
}

int main0303(void)
{
	int arr[][3] = { 1,2,3,4,5,6,7,8 };
	//arr��ʾ��ά������׵�ַ
	//arr[0]��ʾ��ά������׵�ַ
	//&arr[0][0]��ʾ��ά������׵�ַ
	//printf("�׵�ַ:%p\n", arr);
	//printf("�׵�ַ:%p\n", arr[0]);
	//printf("�׵�ַ:%p\n", &arr[0][0]);

	//printf("�ڶ��У�%p\n", arr + 1);
	//printf("�ڶ��У�%p\n", arr[1]);
	//printf("�ڶ��У�%p\n", &arr[1][0]);

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			printf("%p\n", &arr[i][j]);
	return 0;
}

int main0304(void)
{
	//��ջ����ά������ʵ��һ��������һά����
	int arr[][3] = { 1,2,3,4,5,6,7,8 };

	int *p = arr;

	for (int i = 0; i < 3 * 3; i++)
	{
		printf("%d\n", p[i]);
	}
}

int main0305(void)
{
	//�����Ķ�ά����
	//�������ٵĶ�ά���鲻��������  
	int ** p = (int **)malloc(sizeof(int*) * 3);

	for (int i = 0; i < 3; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * 3);
		for (int j = 0; j < 3; j++)
		{
			p[i][j] = i + j;
		}
	}

	for (int i = 0; i < 3; i++)
		printf("%p\n", p[i]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
		free(p[i]);

	free(p);
}