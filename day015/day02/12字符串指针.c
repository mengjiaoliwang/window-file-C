#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main12()
{
	//�ַ���
	char buf[] = "hello world";
	char * buf1 = "hello world";
	//�ַ�����
	char buf2[] = { 'h','e','l','l','o' };
	char buf3[] = "\\\"abc\"\\";

	//for (int i = 0; i < sizeof(buf2); i++)
	//	printf("%c", buf2[i]);
	int val = strlen(buf3);
	printf("%d\n", val);
	return EXIT_SUCCESS;
}