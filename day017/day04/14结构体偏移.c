#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#pragma pack(2)

typedef struct stu
{
	char name[21];//22
	int age;//4
	char sex;//2
	int scores;//4
}ss;
int main()
{
	ss s;
	//可以通过结构体变量找到结构体成员地址

	//printf("name:%p\n", &s);
	printf("name:%p\n", &s.name);
	printf("age:%p\n", &s.age);
	printf("sex:%p\n", &s.sex);
	printf("scores:%p\n", &s.scores);


	return EXIT_SUCCESS;
}