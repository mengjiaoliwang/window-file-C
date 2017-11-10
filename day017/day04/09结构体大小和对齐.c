#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//#pragma pack(2)

/*
1、读取优先
2、存取优先
*/

//ss表示结构体数据类型

struct scores
{
	int cl;
	int cpp;
	int cs;
};
typedef struct stu
{
	//结构体成员列表
	char name[21];//21
	int age;//4
	struct scores score;//12  实际大小37  内存大小40
}ss;



struct A
{
	//40
	double a;//8
	char b[17];//24
	short c;//8
	int d[3];
};
typedef struct B
{
	float e;
	long f[3];
	short g;
	struct A h;
}bb;



typedef struct C
{
	double a;
	char b;
	double c;
	char d;
	double e;
	char f;
}cc;
int main09()
{
	printf("%d\n", sizeof(cc));

	return EXIT_SUCCESS;
}