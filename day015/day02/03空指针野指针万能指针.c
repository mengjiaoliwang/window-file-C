#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0301()
{
	//��ָ��
	//int * p = NULL;
	int *p = malloc(10);
	//д
	//*p = 100;//err
	//��
	//printf("%d\n", *p);//err
	//ͬһ�ڴ��ַ�ͷŶ�λᱨ��
	free(p);
	p = NULL;
	//p��Ұָ��  ָ��ָ����һ��δ֪���ڴ�ռ�
	//����Ұָ���Ӧ�Ŀռ���ܻᱨ��
	//�ڶѿռ�ʹ������ͷ�֮����Ҫ��ָ����Ϊ��
	//*p = 100;
	//printf("%d\n", *p);


	return EXIT_SUCCESS;
}

void fun01(void * a)
{
	for (int i = 0; i < 5; i++)
		printf("%d\n", ((int *)a)[i]);
}



int main0302(void)
{
	//����ָ��
	int arr[] = { 1,2,3,4,5 };
	//void * p = arr;
	//char * p = arr;
	//long long * p = arr;
	//for (int i = 0; i < 5; i++)
	//	printf("%d\n", ((int *)p)[i]);
	fun01(arr);


}