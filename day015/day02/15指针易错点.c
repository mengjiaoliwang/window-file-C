#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1501()
{
	//1��ָ��ָ��Խ������
	//char buf[5] = "hello";
	//char * p = buf;

	//printf("%s\n", p);

	//int * p = malloc(2);
	//*p = 100;

	//printf("%d\n", *p);

	//free(p);
	int * p = malloc(0);//Ұָ��
	//printf("%p\n", p);
	*p = 100;
	printf("%d\n", *p);

	free(p);
	return EXIT_SUCCESS;
}
int main1502(void)
{
	//2��ָ�벻�ϸ��Ļᵼ�³����쳣
	int * p = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		*p = i;
		p++;
	}


	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", p[i-5]);
	}

	free(p - 5);
	return 0;
}

char * fun09()
{
	char buf[] = "hello world";
	return buf;

}

int main1505(void)
{

	//3��ָ����պ����ֲ�������ַ���³����쳣

	char * p = NULL;
	printf("%p\n", p);
	p = fun09();
	printf("%p\n", p);


	printf("%s\n", p);
	return 0;
}

int main1506(void)
{
	//4��ͬһû���ͷŶ�λᵼ�³����쳣
	int * p = (int *)malloc(40);

	free(p);
	p = NULL;
	free(p);
}

void fun10(char * p)
{
	p = malloc(100);
	strcpy(p, "hello world");
}
int main1507(void)
{
	//5��ָ����Ϊ������������ı�ʵ�ε�ֵ��Ҫ��Ҫ��ַ����
	char * p = NULL;

	fun10(p);

	printf("%s\n", p);

	return 0;
}