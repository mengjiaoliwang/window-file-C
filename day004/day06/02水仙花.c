#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main02()
{
	int a, b, c;
	for (int i = 100; i < 1000; i++)
	{
		//1�������λ��ʮλ����λ��ֵ
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		//2���ж��Ƿ���ˮ�ɻ��� ��ӡ���
		//if (i == a*a*a + b*b*b + c*c*c)
		if (i == pow(a,3) + pow(b,3) + pow(c,3))
			printf("%d\n", i);
	}


	return EXIT_SUCCESS;
}