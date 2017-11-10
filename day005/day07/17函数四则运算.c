#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void add(int a, int b)
{
	printf("%d+%d=%d\n", a, b, a + b);
	//return;
}
void sub(int a, int b)
{
	printf("%d-%d=%d\n", a, b, a - b);
}
void mul(int a, int b)
{
	printf("%d*%d=%d\n", a, b, a*b);
}
void dive(int a, int b)
{
	if (b == 0)
	{
		printf("0不能作为除数\n");
		return;
	}
	printf("%d/%d=%d\n", a, b, a / b);
}

int main17()
{
	int a, b;
	char c;
	while (1)
	{
		scanf("%d%c%d", &a, &c, &b);
		if (a == 0 && b == 0)
		{
			break;
		}
		switch (c)
		{
		case '+':
			//printf("加\n");
			add(a, b);
			break;

		case '-':
			//printf("减\n");
			sub(a, b);
			break;

		case '*':
			//printf("乘\n");
			mul(a, b);
			break;

		case '/':
			//printf("除\n");
			dive(a, b);
			break;
		default:
			break;
		}
	}



	return EXIT_SUCCESS;
}