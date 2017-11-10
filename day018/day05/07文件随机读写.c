#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{


	FILE *fp = fopen("D:/h.txt", "rb");
	if (!fp)
		return -1;

	/*
	 SEEK_CUR    1   从当前位置偏移
	 SEEK_END    2   从文件结尾偏移
	 SEEK_SET    0   从文件起始偏移
	*/
	int age;
	fseek(fp, 24, SEEK_SET);
	fread(&age, sizeof(int), 1, fp);
	printf("%d\n", age);

	fseek(fp, 36, SEEK_CUR);
	//fseek(fp, 64, SEEK_SET);
	fread(&age, sizeof(int), 1, fp);
	printf("%d\n", age);

	fseek(fp, 36, SEEK_CUR);
	fread(&age, sizeof(int), 1, fp);
	printf("%d\n", age);

	char buf[100];
	fseek(fp, -40, SEEK_END);

	fread(buf, 21, 1, fp);
	printf("%s\n", buf);

	//ftell查看当前文件的光标位置
	int len = ftell(fp);

	printf("%d\n", len);

	//重置文件光标位置在文件起始
	rewind(fp);

	len = ftell(fp);
	printf("%d\n", len);
	fclose(fp);

	return EXIT_SUCCESS;
}