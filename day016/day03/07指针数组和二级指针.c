#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{
	//ָ������
	//buf[0]��ջ����ָ�������ָ�����������ַ����������ĵ�ַ����ֵ���Ըı� 
	//buf[0][0]���ַ������������ڴ浥Ԫ�������޸�
	char * buf[3] = { "hello","world","dabaobei" };
	//����ָ��ָ����ָ������
	char **p = buf;


	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", p[i]);
		//printf("%s\n", *(p+i));
	}
	//char * p = "hello";
	//buf[0] = buf[1];
	//buf[0][0] = 'w';

	//printf("%s\n", buf[0]);
	//printf("%p\n", buf[0]);
	//printf("%p\n", p);
	//printf("%p\n", buf[2]);


	return EXIT_SUCCESS;
}