#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//struct stu
//{
//	char name[21];//21
//	char sex;//1
//	char tel[15];//15  ->45????
//	int age;//4
//	int score;//4
//}s;


struct A
{
	double a;
	int arr[3];
	int brr[2];
	short b;
	short crr[3];
	char name[15];
}s;

int main03()
{
	int len = sizeof(s);
	printf("结构体大小：%d\n", len);


	//printf("name : %p\n", s.name);//21->24???
	//printf("age : %p\n", &s.age);//4
	//printf("sex : %p\n", &s.sex);//1
	//printf("score : %p\n", &s.score);//1
	//printf("tel : %p\n", &s.tel);//15


	return EXIT_SUCCESS;
}