#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main801()
{
	//�������ݳ��ȳ�����ջ����С1M
	//int scores[260000];


	//�ڶ����������ݿռ�  ��λΪ�ֽ�
	int *p = malloc(sizeof(int));

	*p = 100;

	printf("%d\n", *p);

	//�ͷŶѿռ�
	free(p);
	p = NULL;
	//����pΪҰָ��
	//�ͷ�Ұָ��ᱨ��
	//�ͷſ�ָ�벻�ᱨ��
	free(p);
	//free(p);
	//free(p);
	//free(p);
	//free(p);
	//free(p);
	



	return EXIT_SUCCESS;
}

int main08 (void)
{
	//int *p = (int *)malloc(sizeof(int) * 8100000*10*3);

	//for (int i = 0; i < 10; i++)
	//{
	//	//*(p + i) = i;
	//	p[i] = i;
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", p[i]);
	//}

	//free(p);
	//p = NULL;
	getchar();
	return 0;
}