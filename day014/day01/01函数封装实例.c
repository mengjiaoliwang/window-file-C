#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//ͨ������ʵ��һ�������Ĺ���
//��������
//ð������

//��������
extern void BubbleSort(int * src, int len);

/*
����������������ʡ�ԣ�
�����Ķ���
�����ĵ���
*/
//ȫ�ֺ��� 
//��������
void BubbleSort(int *src, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//�������� ��С����
			if (src[j] > src[j + 1])
			{
				int temp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = temp;
			}
		}
	}
}
int main01()
{
	int arr[] = { 3,6,1,5,7,8,2,9,4,10 };
	//��������
	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));


	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	
	return EXIT_SUCCESS;
}