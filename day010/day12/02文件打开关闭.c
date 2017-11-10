#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0101()
{
	FILE * fp = fopen("D:/解密.txt", "r");
	if (fp == NULL)
	{
		printf("打开文件失败!\n");
		return -1;
	}

	printf("文件打开成功！\n");

	//操作文件
	char ch = fgetc(fp);
	//不需要改变文件的指针，就可以读取文件的内容
	//fp++;//err
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);

	//关闭文件
	fclose(fp);


	return EXIT_SUCCESS;
}

int main0102(void)
{
	FILE * fp = fopen("D:/解密.txt", "r");
	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}

	char ch;
	//EOF表示文本文件的结束标志
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);


	return 0;
}

int main0103(void)
{
	FILE * fp = fopen("D:/a.txt", "a");
	if (fp == NULL)
		return -1;

	char ch = 'b';
	fputc(ch, fp);

	fclose(fp);
}

int main0104(void)
{
	FILE * fp = fopen("D:/b.txt", "w");
	if (fp == NULL)
		return -1;
	char ch;
	while (1)
	{
		//ch = getchar();
		scanf("%c", &ch);

		if (ch == ':')
		{
			break;
		}
		fputc(ch, fp);

	}


	fclose(fp);
}