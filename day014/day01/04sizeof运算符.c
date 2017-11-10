#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct stu
{
	char name[21];//24
	int age;//4
	char sex;//4
}s;

union Var
{
	int a;
	float b;
	double c;
	char d[9];
};

int main04()
{

	//int a = 10;
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a);


	//int arr[] = { 1,2,3,4,5,6 };

	////数组在内存中占的字节大小
	//printf("%d\n", sizeof(arr));//24;
	////数组元素个数：
	//printf("数组元素个数：%d\n", sizeof(arr) / sizeof(arr[-1000]));


	//s s1[3];
	//printf("%d\n", sizeof(s1));//32* 3

	printf("%d\n", sizeof(union Var));
	return EXIT_SUCCESS;
}