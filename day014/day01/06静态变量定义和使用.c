#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//��̬ȫȫ�ֱ���ֻ֮���ڱ��ļ���ʹ��
//static int a1 = 10;

int aa;
static bb;

void fun02()
{
	//��̬�ֲ�����  ��̬����ֻ���ʼ��һ��
	static int a = 10;
	a++;
	printf("%d\n", a);
}

int main06()
{
	//for (int i = 0; i < 10;i++)
	//	fun02();

	//{
	//	printf("%d\n", a);
	//}
	//test();

	//int aaaa;
	//printf("%d\n", aaaa);
	int c = aa++ + bb++;
	//printf("%d\n", aa);
	//printf("%d\n", bb);
	printf("%d\n", c);//0
	return EXIT_SUCCESS;
}