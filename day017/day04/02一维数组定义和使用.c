#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5

int main0201()
{

	//���鶨��
	//int arr[5] = { 1,2,3,4,5 };
	//int arr[] = { 1,2,3,4,5 };
	//int arr[5] = { 1,2,3 };
	//int arr[5] = { 1 };
	//int arr[MAX];

	int *arr = (int *)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);


	return EXIT_SUCCESS;
}

int main0202(void)
{
	int arr[5] = { 1,2,3,4,5 };
	//����������ڴ���ռ���ֽڴ�С
	sizeof(arr);//20
	sizeof(arr[0]);//4
	//����Ԫ�ظ���
	sizeof(arr) / sizeof(arr[0]);


	//������  ��������׵�ַ  &arr[0]  ָ���������е�һ��Ԫ�صĵ�ַ  ��������һ������ ���ܱ���ֵ

}


/*
������Ϊ�����������˻�Ϊָ��
��Ҫ��������ֵһ����������ʼ��ַ ����Ԫ�ظ���
*/
void fun01(int arr[100],int len)
{
	//printf("%p\n", arr);
	//printf("%d\n", sizeof(arr));
	for (int i = 0; i < len; i++)
		printf("%d\n", arr[i]);

}

int main0203(void)
{
	int arr[5] = { 1,2,3,4,5 };


	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr+1);
	//printf("%d\n", sizeof(arr));


	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//	printf("%d\n", arr[i]);

	fun01(arr, sizeof(arr) / sizeof(arr[0]));


	return 0;
}