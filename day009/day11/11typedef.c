#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//1��Ϊ���е��������������  2��Ϊ������������庯��ָ������
typedef unsigned long long ull;

typedef struct StudentInfoList sil;
struct StudentInfoList
{
	char name[21];
	int age;
};

int main()
{
	//auto ull a = 10;
	//auto unsigned long long b = 20;
	sil s;
	strcpy(s.name, "���޶�");
	s.age = 88;
	printf("������%s\n", s.name);
	printf("���䣺%d\n", s.age);

	system("pause");
	return EXIT_SUCCESS;
}