#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main03()
{
	//���������ʽ  �������� ������[����Ԫ�ظ���]
	//int scores[10];
	//�ҵ������Ԫ��   ͨ���±���и�ֵ 
	//�����±���0-����Ԫ�ظ���-1
	//scores[0]���൱��һ�� int���͵ı���
	//scores[0] = 1;
	//scores[1] = 2;
	//scores[9] = 10;
	//����Ԫ�ظ�ֵ��
	int scores[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//Ϊ�����ǰ���Ԫ�ظ�ֵ δ��ֵ��Ĭ��Ϊ0
	//int scores[10] = { 1,2,3,4,5 };
	//int scores[] = { 1,2,3,4,5 };
	

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", scores[i]);
	}
	//printf("%d\n", scores[9]);

	//�����С
	//printf("�������ڴ��д�С��%d\n", sizeof(scores));
	//����Ԫ�����ڴ��еĵ�ַ

	//printf("scores[0]��ַ��%p\n", &scores[0]);
	//printf("scores[1]��ַ��%p\n", &scores[1]);
	//printf("scores[2]��ַ��%p\n", &scores[2]);

	return EXIT_SUCCESS;
}