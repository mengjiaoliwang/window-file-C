#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


char * mystrstr01(const char * dest, const char* src)
{
	int i = 0;
	while (dest[i] != '\0')
	{
		int j = 0;
		while (dest[i+j] == src[j] && src[j] != '\0')
		{
			//i++;
			j++;
		}
		if (src[j] == '\0')
		{
			return &dest[i];
		}
		//i = i - j;
		i++;
	}

	return NULL;
}

int main11()
{
	/*
	�����ַ������ַ����г��ֵ�Ϊλ�� �ɹ�  ʧ��ΪNULL
	*/
	//strstr("hello world","llo")

	printf("%s\n", mystrstr01("llllohelle wor", "llo"));
	return EXIT_SUCCESS;
}