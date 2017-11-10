#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main03()
{
	//&Éý¼¶  *½µ¼¶
	int a = 10;
	int *p = &a;
	int **p1 = &p;
	int ***p2 = &p1;
	int ****p3 = &p2;
	int *****p4 = &p3;
	//*p4 == p3 == &p2;
	//**p4 == *p3 == p2 == &p1;
	//***p4 == **p3 == *p2 == p1 == &p;
	//****p4 == ***p3 == **p2 == *p1 == p == &a;
	//*****p4 == ****p3 == ***p2 == **p1 == *p == a;
	return EXIT_SUCCESS;
}