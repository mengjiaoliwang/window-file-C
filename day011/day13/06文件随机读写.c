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

	//���ļ���ʼλ��ƫ��7���ַ�
	//fseek(fp, 12, SEEK_SET);

	//���ļ���β��ʼ����ƫ��-12�ַ�
	//fseek(fp, -12, SEEK_END);

	//fseek(fp, 7, SEEK_SET);
	//�ӵ�ǰλ������ƫ��5���ַ�
	//fseek(fp, 5, SEEK_CUR);

	//fseek(fp, -4, SEEK_CUR);


	//fseek(fp, -10, SEEK_SET);

	fseek(fp, 0, SEEK_END);
	fseek(fp, 10, SEEK_CUR);
	//��ȡ��ǰ�������λ��,���ļ���ʼλ�ÿ�ʼ����ǰ�������λ��
	long pos = ftell(fp);//36 46

	printf("%ld\n", pos);

	//�����ļ�������ļ���ʼλ��
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