#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//5��cosnt ���κ�����������  ������ʵ���ǿ����޸�src��ֵ  ���ǲ����޸�srcָ���ֵ
char *strcpy(char *dest, const char *src);

int main()
{
	//1��ͨ��ָ���޸ĳ�����ֵ
	//const a = 10;
	////a = 100;//err

	//int * p = &a;
	//*p = 100;
	//printf("%d\n", a);

	int a = 10;
	int b = 20;
	//2��const����ָ������
	//const int* p = &a;
	//p = &b;//ok
	//*p = 200;//err
	//3��const����ָ�����
	//int * const p = &a;
	//p = &b;//err
	//*p = 100;//ok

	//4��const����ָ������const����ָ�����
	//const int* const p = &a;
	////*p = 100;//er
	////p = &b;
	////printf("%d\n", a);

	//int **p1 = &p;
	////*p1 = &b;
	//**p1 = 100;
	//printf("%d\n", *p);
	return EXIT_SUCCESS;
}