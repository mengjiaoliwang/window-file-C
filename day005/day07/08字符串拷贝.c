#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main08()
{
	char buf[] = "hello";
	char dest[100];
	//�ַ�������
	//strcpy(dest, buf);
	//�ַ������޿���  �����ڽ�β����\0
	strncpy(dest, buf, 2);

	//0ʮ��������  ��ASCII��ָ�ľ���\0
	//dest[2] = 0;
	dest[2] = '\0';

	printf("%s\n", dest);
	//printf(dest);

	//char arr[] = "hello world";
	//int i = 0;
	//while (arr[i]=='\0')
	//{
	//	i++;
	//}

	//printf("%d\n", i);
	
	return EXIT_SUCCESS;
}