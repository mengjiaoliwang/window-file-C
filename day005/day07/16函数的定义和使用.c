#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//����������
int BubbleSort(int arr[], int len);
int main16()
{
	//����������
	//printf("hello");

	int arr[] = { 9,4,6,5,3,10,8,7,2,1 };
	//int arr1[] = { 19,4,61,5,33,10,88,7,21,16 };
	//�����ĵ���
	//������Ϊ���������˻�Ϊָ��
	//���������� �����Ĳ����о����ֵ ��Ϊʵ�ʲ��� ���ʵ��
	BubbleSort(arr,10);
	//BubbleSort(arr1[10]);

	
	for (int i= 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return EXIT_SUCCESS;
}


//�����Ķ���  ������ʵ�ֹ���
int BubbleSort(int arr[], int len)
{
	if (arr == NULL)
		return 1;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return 0;
}