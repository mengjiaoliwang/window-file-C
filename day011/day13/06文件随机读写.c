#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main06()
{
	FILE * fp = fopen("../../b.txt", "r");
	if (!fp)
		return -1;

	//从文件开始位置偏移7个字符
	//fseek(fp, 12, SEEK_SET);

	//从文件结尾开始向右偏移-12字符
	//fseek(fp, -12, SEEK_END);

	//fseek(fp, 7, SEEK_SET);
	//从当前位置向右偏移5个字符
	//fseek(fp, 5, SEEK_CUR);

	//fseek(fp, -4, SEEK_CUR);


	//fseek(fp, -10, SEEK_SET);

	fseek(fp, 0, SEEK_END);
	fseek(fp, 10, SEEK_CUR);
	//获取当前光标所在位置,从文件起始位置开始到当前光标所在位置
	long pos = ftell(fp);//36 46

	printf("%ld\n", pos);

	//重置文件光标在文件起始位置
	fseek(fp, 200000, SEEK_END);
	rewind(fp);
	pos = ftell(fp);
	printf("%ld\n", pos);
	//char buf[100] = { 0 };
	//fgets(buf, 5, fp);

	//printf("===%s===", buf);

	fclose(fp);
	return EXIT_SUCCESS;
}