#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main08()
{

	int arr[10] = { 2,7,9,3,6,10,1,5,8,4 };

	printf("����ǰ��\n");
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);


	//ð������
	//��������  ÿִ��һ����ȷ��һ�����ֵ
	//ʱ����  �ռ���
	for (int i = 0; i < 9; i++)
	{
		//�ڴ������ ÿִ��һ���ж��������ڵ�����С
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("�����\n");
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return EXIT_SUCCESS;
}