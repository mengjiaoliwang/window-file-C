#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0801()
{
	if (!remove("../../bz.txt"))
	{
		printf("�ļ�ɾ���ɹ�\n");
	}
	else
	{
		printf("�ļ�ɾ��ʧ��\n");
	}


	return EXIT_SUCCESS;
}

int main0802(void)
{
	if (!rename("../../bz.txt", "../../�೤.txt"))
	{

		printf("�ļ��������ɹ�\n");
	}
	else
	{
		printf("�ļ�������ʧ��\n");
	}
	return  0;
}