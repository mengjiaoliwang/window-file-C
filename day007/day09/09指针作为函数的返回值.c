#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

char * fun01(char * buf)
{
	gets(buf);
	return buf;
}

int main901()
{
	char buf[100];
	//char * p = fun01(buf);
	printf("%s\n", fun01(buf));


	return EXIT_SUCCESS;
}

/*
ָ����Ϊ��������ֵʱ��Ҫ����Ұָ�����

*/
int * fun02()
{
	int arr[] = { 1,2,3,4,5,6,7};
	printf("%p\n", arr);
	getchar();
	return arr;
}
int main09(void)
{
	//Ұָ��
	int *p = fun02();
	for (int i = 0; i < 7; i++)
		printf("%d\n", p[i]);

	return 0;
}