#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//������Ϊ��������ʱ�����ɻ�Ϊָ�룬�����޷�������鳤����Ҫ����һ�����鳤�ȱ�֤���鲻Խ��
//�����ڴ�����Ϊ��ַ���ݣ��βλ�ı�ʵ�ε�ֵ
void BubbleSort1(int* arr, int len)
{
	//printf("�β��д�С:%d\n", sizeof(arr));

	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main05()
{
	int arr[] = { 4,8,1,9,3,7,6,10,5,2 };

	//printf("ʵ���д�С:%d\n", sizeof(arr));
	BubbleSort1(arr, 10);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d\n", arr[i]);
	return EXIT_SUCCESS;
}