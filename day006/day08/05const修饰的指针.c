#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main501()
{
	/*
	const ���εı�����Ϊֻ������ ����
	����ͨ��һ��ָ���޸�
	*/
	const int a = 10;
	//a = 100;

	int *p = &a;
	*p = 100;
	printf("%d\n", a);


	return EXIT_SUCCESS;
}

int main502(void)
{
	/*
	ָ������ָ��

	�����޸�ָ��ָ��
	�������޸�ָ�������ֵ��

	�����޸�ָ�����ָ���ֵ
	*/
	int a = 10;
	int b = 20;
	const int* p = &a;
	//p = &b;//ok
	//*p = 100;//err

}

int main503(void)
{
	/*
	����ָ��
	�����޸�ָ�����ָ���ֵ
	�����޸�ָ�������ֵ
	*/
	int a = 10;
	int b = 20;
	int* const p = &a;
	//p = &b;//err
	*p = 100;

	printf("%d\n", a);

}

int main504(void)
{
	/*
	ֻ��ָ��
	�����޸�ָ�������ֵ
	�����޸�ָ�����ָ���ֵ
	*/
	int a = 10;
	int b = 20;
	const int* const p = &a;
	//p = &b;//err
	//*p = 100;//err
}
