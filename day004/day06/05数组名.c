#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main05()
{
	int scores[10];
	//��������һ������  ָ��������׵�ַ
	//ͨ�������±��������Ԫ��
	//scores[10] = 1;//err  �����±�Խ��
	//scores[0]~scores[10-1]
	//for (int i = 0; i < 10; i++)
	//	//scores[i]�±�
	//	scanf("%d", &scores[i]);

	printf("��������Ӧ�ĵ�ַ��%p\n", scores);
	printf("�����һ��Ԫ�ص�ַ��%p\n", &scores[0]);

	return EXIT_SUCCESS;
}