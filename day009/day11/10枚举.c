#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

enum color
{
	red,green,bule,yellow,black,white
}c;
//����ȡ�����̿���
//enum card
//{
//	1���忨
//	2������
//	3����������
//	4����
//	5����ѯ
//	6��ȡǮ
//	7���˿�
//	8������
//};


int main10()
{
	enum  color c;
	//ö�ٱ������Ը�ֵ ���������ö���б��ֵ û������
	c = 100;
	//ö���б��е�����ʱ�������ܸ�ֵ
	//red = 100;

	printf("%d\n", c);
	//printf("������Ԫɫ��ţ�\n");
	//int num;
	//scanf("%d", &num);
	//switch (num)
	//{
	//case red:
	//	printf("��ɫ\n");
	//	break;
	//case green:
	//	printf("��ɫ\n");
	//	break;
	//case bule:
	//	printf("��ɫ\n");
	//	break;
	//case yellow:
	//	printf("��ɫ\n");
	//	break;
	//case black:
	//	printf("��ɫ\n");
	//	break;
	//case white:
	//	printf("��ɫ\n");
	//	break;
	//default:
	//	break;
	//}

	//printf("%d\n", c);


	return EXIT_SUCCESS;
}