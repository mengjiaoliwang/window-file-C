#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#include <time.h>
#include <conio.h>


void randomCh(char * buf, int len)
{
	if (buf == NULL || len <= 0)
		return;
	for (int i = 0; i < len; i++)
	{
		buf[i] = rand() % 26 + 97;
	}
}

void print(char *buf)
{
	printf("%s", buf);
}


void inputCh(char * buf, int len)
{
	char ch;
	int start_time = 0;
	int end_time = 0;
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		//scanf()
		ch = _getch();
		if (i == 0)
			start_time = time(NULL);
		if (buf[i] == ch)
		{
			putchar(ch);
			count++;
		}
		else
			putchar('_');
	}
	end_time = time(NULL);

	printf("\n��ʱ��%d(��)\n", end_time - start_time);
	printf("��ȷ�ʣ�%.2f%%\n", (float)count / len *100.0);
}

int main01()
{
	/*
	1�����50��Ӣ���ַ�
	2����ȡ�����ַ�_getch();->conio.h
	3�����ֽ��� ��ȡ��ȷ�ʴ���ʱ��
	*/
	srand((unsigned int)time(NULL));

	char buf[51];
	memset(buf, 0, 51);

	//�����
	randomCh(buf, 50);

	//��ӡ
	print(buf);
	printf("\n");

	//��ӡ�ַ�
	inputCh(buf, 50);

	return EXIT_SUCCESS;
}