#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main09()
{

	//��ά���鶨���ʽ���������� ������[����][����]
	//��ά����Ԫ�ظ�������*��
	//int arr[2][3] = 
	//{ 
	//	{1,2,3},
	//	{4,5,6}
	//};
	//int arr[2][3] =
	//{
	//	{1,2,3},
	//	{4}
	//};

	//int arr[2][3] = { 1,2,3,4,5,6 };

	//�ڶ�ά���鶨��ʱ ����Ҫд���еĴ�С
	int arr[][3] = 
	{
		{1,2,3},
		{4,5,6}
	};

	//��ά�����С
	printf("��ά�����С:%d\n", sizeof(arr));
	printf("��ά����һ�д�С��%d\n", sizeof(arr[0]));
	printf("��ά����һ��Ԫ�ش�С��%d\n", sizeof(arr[0][0]));
	//��������ά�����С/һ�д�С
	int row = sizeof(arr) / sizeof(arr[0]);
	//������һ�д�С/Ԫ�ش�С
	int cls = sizeof(arr[0]) / sizeof(arr[0][0]);

	//��ά�����е� ����������������ʾһ��һά����   ��һ������ �����һ�е��׵�ַ
	//arr[0] = 100;//err

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cls; j++)
		{
			//printf("%d ", arr[i][j]);
			//��ӡ���ж�ά�����ַ
			printf("arr[%d][%d]��ַ��%p\n", i, j, &arr[i][j]);
		}
		//printf("\n");
	}
	printf("��ά�����׵�ַ��%p\n", arr);
	printf("��ά�����׵�ַ��%p\n", arr[0]);
	printf("��ά�����׵�ַ��%p\n", &arr[0][0]);
	printf("��ά����ڶ��е�ַ��%p\n", arr[1]);

	return EXIT_SUCCESS;
}