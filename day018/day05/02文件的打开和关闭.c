#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100;

int main0201()
{
	FILE * fp = fopen("D:/a.txt", "r");
	//1、文件权限不足
	//2、程序打开文件上限 
	//3、打开文件路径失败
	if (!fp)
	{
		printf("打开文件失败\n");
		return -1;
	}

	//操作->1、字符读写 2、行读写 3、格式化读写 4、二进制读写
	//     fgetc fputc  fgets fputs fprintf fscanf  fread fwrite
	//文件结束标志->  1、EOF（-1）  文本文件 2、feof（文件指针）
	//1、字符读写
	char ch;
	//ch = fgetc(fp);
	//printf("%c\n", ch);

	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);


	return EXIT_SUCCESS;
}

int main0202(void)
{
	//w 写文件  如故文件不存在 会创建新文件 文件存在 会覆盖文件内容
	FILE * fp = fopen("D:/b.txt", "w");
	if (!fp)
	{
		printf("打开文件失败\n");
		return -1;
	}
	//char ch = 'a';
	//fputc(ch, fp);
	//ch = 'b';
	//fputc(ch, fp);

	char ch;

	while (1)
	{
		scanf("%c", &ch);
		if (ch == ':')
			break;
		fputc(ch, fp);
	}

	fclose(fp);


	return 0;
}