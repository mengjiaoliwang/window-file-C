#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*
ָ����Ϊ�����Ĳ���
*/

//int swap(int a, int b)
//{
//	int temp = a; 
//	a = b;
//	b = temp;
//}
int swap(int* a, int* b)
{
	int temp = *a; 
	*a = *b;
	*b = temp;
}

int main04()
{
	/*
	ֵ���ݣ�
	�ββ��ܸı�ʵ�ε�ֵ
	*/
	int a = 10;
	int b = 20;
	//swap(a, b);

	/*
	��ַ���ݣ�
	�βο��Ըı�ʵ�ε�ֵ
	*/
	swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);


	return EXIT_SUCCESS;
}