#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main06()
{

	FILE * fp = fopen("D:/四则运算.txt", "r");
	FILE * fp1 = fopen("D:/四则运算结果.txt", "w");
	if (!fp || !fp1)
		return -1;
	//while(!feof(fp))
	int a, b;
	int val;
	char c;
	char buf[100];
	for (int i = 0; i < 100; i++)
	{
		memset(buf, 0, 100);
		fgets(buf, 100, fp);

		//格式化变成相对应的变量
		sscanf(buf, "%d%c%d=\n", &a, &c, &b);

		switch (c)
		{
		case '+':
			val = a + b;
			break;
		case '-':
			val = a - b;
			break;
		case '*':
			val = a * b;
			break;
		case '/':
			val = a / b;
			break;
		}

		memset(buf, 0, 100);
		sprintf(buf, "%d%c%d=%d\n", a, c, b, val);
		fputs(buf, fp1);

		//printf("%s", buf);
	}

	fclose(fp);
	fclose(fp1);

	return EXIT_SUCCESS;
}