#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main12()
{
	char buf[] = "hello world";
	char ch = 'm';

	//�ҵ����ص�һ�γ���λ��
	//�Ҳ�������NULL
	char * p = strchr(buf, ch);

	printf("%s", p);

	return EXIT_SUCCESS;
}