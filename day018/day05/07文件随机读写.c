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
	 SEEK_CUR    1   �ӵ�ǰλ��ƫ��
	 SEEK_END    2   ���ļ���βƫ��
	 SEEK_SET    0   ���ļ���ʼƫ��
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

	//ftell�鿴��ǰ�ļ��Ĺ��λ��
	int len = ftell(fp);

	printf("%d\n", len);

	//�����ļ����λ�����ļ���ʼ
	rewind(fp);

	len = ftell(fp);
	printf("%d\n", len);
	fclose(fp);

	return EXIT_SUCCESS;
}