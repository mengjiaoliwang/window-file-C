#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#include <sys/types.h>
#include <sys/stat.h>


int main05()
{
	struct stat  s = { 0 };

	stat("../../e.txt", &s);

	printf("�ļ���С:%d\n", s.st_size);


	return EXIT_SUCCESS;
}


int main0502()
{

	struct stat s = { 0 };
	stat("../../b.txt", &s);

	printf("�ļ����ͣ�%u\n", s.st_mode);
	printf("�ļ��ֽڣ�%ld\n", s.st_size);


	return 0;
}