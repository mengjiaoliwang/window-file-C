#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//Ϊ�������������
typedef unsigned long long ull;

//typedef ֻ��Ϊ�Ѵ��ڵ��������������
typedef struct stu
{
	char name[21];
	int age;
}s;

int main03()
{
	ull  a = 10;

	printf("%d\n", a);
	s s1;
	strcpy(s1.name, "��ǿ");
	return EXIT_SUCCESS;
}