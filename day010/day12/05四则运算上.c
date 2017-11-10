#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>

enum opt
{
	add, sub, mlt, dive
}op;

int main05()
{
	srand((unsigned int)time(NULL));
	FILE * fp = fopen("D:/四则运算.txt", "w");
	if (fp == NULL)
		return -1;

	int a, b;
	char c;
	char buf[100];
	for (int i = 0; i < 100; i++)
	{
		//3+4
		//3*4
		a = rand() % 10 + 1;//1-10;
		b = rand() % 10 + 1;//1-10;
		c = rand() % 4;//0-3
		switch (c)
		{
		case add:
			c = '+';
			break;
		case sub:
			c = '-';
			break;
		case mlt:
			c = '*';
			break;
		case dive:
			c = '/';
			break;
		default:
			break;
		}

		memset(buf, 0, 100);
		//将格式化内容放入字符串中
		sprintf(buf, "%d%c%d=\n", a, c, b);
		fputs(buf, fp);
	}


	fclose(fp);

	return EXIT_SUCCESS;
}