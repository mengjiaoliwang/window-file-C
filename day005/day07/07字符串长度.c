#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{
	char buf[100] = "hello\0 world";
	//��С:����ַ������ڴ���ռ���ֽ�
	//int len = sizeof(buf);//100
	//����:���\0֮ǰ����Ч�ַ�
	printf("%d", strlen(buf));


	return EXIT_SUCCESS;
}