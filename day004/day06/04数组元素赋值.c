#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main04()
{
	int scores[10];
	////������ܳ��ȣ�
	//int len = sizeof(scores);
	////Ԫ�ش�С
	////int elm = sizeof(int);
	//int elm = sizeof(scores[0]);
	//printf("���鳤�ȣ�%d\n", len);
	//printf("Ԫ�س��ȣ�%d\n", elm);
	int size = sizeof(scores) / sizeof(scores[0]);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &scores[i]);
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d\n", scores[i]);
	}

	
	return EXIT_SUCCESS;
}