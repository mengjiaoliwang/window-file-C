#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0201()
{
	//数据类型 * 变量
	//p是指针类型变量
	int a = 10;
	int* p;
	p = &a;//p接收的是地址  地址是内存上编号  unsigned int  十六进制

	*p = 100;

	printf("%d\n", a);


	return EXIT_SUCCESS;
}


int main0202(void)
{
	//指向数组的指针
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//数组名就是数组的首地址  等同于 &arr[0] 是一个常量
	//arr = 100;//err
	int* p;
	p = arr;
	////通过指针间接操作数组
	//printf("%d\n", *p);
	////因为p是int*类型的  每次在进行++  -- 都跳过了一个sizeof（int）大小
	//p++;
	//printf("%d\n", *p);



	//可以将指针p当做数组名操作数组
	//arr[i]
	//printf("%d\n", p[0]);
	//printf("%d\n", p[1]);


	printf("%d\n", *(p + 0));
	printf("%d\n", *(p + 1));
	return 0;
}

struct stu
{
	int a;
	char b;
};
int main0203(void)
{
	//指针的大小:
	//在32位系统下是4个字节
	//在64为系统下是8个字节
	int* p;
	char* p1;
	double* p2;
	int*** p3;

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(struct stu *));
	printf("%d\n", sizeof(float****));
	printf("%d\n", sizeof(void*));


	return 0;
}
