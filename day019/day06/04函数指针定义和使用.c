#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//���庯������
typedef  void opt(int, int);
void add(int a, int b)
{
	printf("%d\n", a + b);
}
void sub(int a, int b)
{
	printf("%d\n", a - b);
}

int main04()
{
	//����ָ��
	opt* o;
	//o = add;
	//printf("%p\n", o);
	//o = sub;
	//printf("%p\n", o);

	//ͨ������ָ���������
	//o = add;
	o = sub;
	o(10, 20);


	return EXIT_SUCCESS;
}