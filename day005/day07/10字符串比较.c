#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main10()
{

	char buf1[] = "hello world";
	char buf2[] = "hollo kitty";

	//ʹ���ַ����Ƚ���Ϊ�ж�����
	//int val = strcmp(buf1, buf2);
	//printf("%d\n", val);

	//if (!strcmp(buf1, buf2))
	//{
	//	printf("��ͬ\n");
	//}
	//else
	//{
	//	printf("����ͬ\n");
	//}

	//�ַ������ޱȽ�
	if(!strncmp(buf1, buf2, 5))
		printf("��ͬ\n");
	return EXIT_SUCCESS;
}