#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main601()
{
	/*
	ָ�����ָ��һ��������׵�ַ��ͬʱ���Դ��������ʾ��������Ԫ��
	ָ����Խ��мӼ�
	*/
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", arr);
	//arr = 10;

	//int *p = arr;
	int *p = &arr[0];
	//*p = 100;
	//p[1] = 100;
	for (int i = 0; i < 10; i++)
	{
		//printf("%d\n", arr[i]);
		//printf("%d\n", *p);
		printf("%p\n", p);
		p++;//��ַ+sizeof(int)
		//p += 4;//��ַ+sizeof(int)* 4
		/*
		p+1->��һ��
		p+4->��һ��
		*/
	}
	return EXIT_SUCCESS;
}
int main602(void)
{
	char arr[] = "hello world";

	char *p = arr;
	for (int i = 0; i < 11; i++)
	{
		//printf("%c\n", *p);
		printf("%p\n", p);
		p++;//��ַ+sizeof(char)
	}
}
int main603()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int *p = arr;
	////p++;//&arr[1];
	//p = &arr[5];
	//printf("%d\n",p - arr);
	////p++;
	//p = &arr[5];
	//int val = p - arr;//(p-arr)/sizeof(int)
	//printf("%d\n", val);
	//int a = 10;
	//printf("%p\n", &a);
	//printf("%p\n", &a - 1);
	//printf("%p\n", &a + 1);
}
int main604()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int *p = arr;

	for (int i = 0; i < 10; i++)
	{
		//printf("%d\n", arr[i]);
		//printf("%d\n", p[i]);
		printf("%d\n", *(p+i));
		//p++;
		/*
		ͨ��ָ���ӡ����Ԫ�أ�ͬʱ���ܸı�ָ���ָ��
		*/
	}

	printf("%p\n", arr);
	printf("%p\n", p);
}