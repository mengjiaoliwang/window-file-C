#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct stu
{
	char name[21];
	int age;
};

union test
{
	struct stu s;
	int a;
	short b;
	float c;
}T;
int main01()
{
	
	strcpy(T.s.name, "hello");
	T.s.age = 19;
	printf("%s\n", T.s.name);
	printf("%d\n", T.s.age);
	system("pause");
	return EXIT_SUCCESS;
}