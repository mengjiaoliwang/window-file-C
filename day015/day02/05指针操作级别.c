#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main05()
{
	int a = 10;
	int b = 20;
	int *p = &a;
	int **p1 = &p;
	int ***p2 = &p1;

	//*p2 = 100;//err
	//*p2 == p1 == &p;
	//**p2 = &b;//ok
	//***p2 == **p1 == *p = a;ֵ
	//*p = 100;
	//printf("%d\n", b);
	***p2 = 100;
	printf("%d\n", a);

	//printf("a�ĵ�ַ��%p\n", p);
	//printf("a�ĵ�ַ��%p\n", &a);


	//printf("p�ĵ�ַ��%p\n", &p);
	//printf("p�ĵ�ַ��%p\n", p1);


	//printf("p1�ĵ�ַ��%p\n", &p1);
	//printf("p1�ĵ�ַ��%p\n", p2);






	return EXIT_SUCCESS;
}