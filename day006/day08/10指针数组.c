#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main1001()
{

	//ָ�������ָ��
	//int arr[] = { 1,2,3 };
	//int * p = arr;
	//ָ������
	int a = 10;
	int b = 20;
	int c = 30;
	int * p[3] = { &a,&b,&c };
	//p[0] == &a;
	*p[0] = 100;
	*p[1] = 200;
	*p[2] = 200;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	return EXIT_SUCCESS;
}

int main1002(void)
{
	int a[] = { 1,2,3 };
	int b[] = { 9,10,'j' };
	int c[] = { 'Q','K','A' };

	int *p[3] = { a,b,c };
	//�����±�+ƫ����
	//*(p[0] + 1) = 100;
	//*(p[1] + 2) = 'Q';
	//��ά����
	//p[0][1] = 100;
	//p[1][2] = 'Q';
	//����ָ��
	*(*(p + 1) + 2) = 'Q';
	//printf("%p\n", p[1]);
	//printf("%p\n", b);
	//printf("%p\n", *(p + 1));

	//printf("%d\n", a[0]);
	//printf("%d\n", a[1]);
	//printf("%d\n", a[2]);
	printf("%c\n", b[2]);

}
int main1003()
{
	int a[] = { 1,2,3 };
	int b[] = { 9,10,'j' };
	int c[] = { 'Q','K','A' };

	int *p[3] = { a,b,c };

	//�����±�+ƫ����
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d ", *(p[i] + j));
	//	}
	//	printf("\n");
	//}
	//��ά����
	//���Խ�ָ���������Ϊ��ά���飬���ǲ��ܽ���ά�������Ϊָ�����飬��Ϊ�ᶪʧά��
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d ", p[i][j]);
	//	}
	//	printf("\n");
	//}

	//����ָ��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", *(*(p + i) + j));
			printf("%d ", *(p[i] + j));
		}
		printf("\n");
	}
}

int main1004(void)
{
	int a[] = { 1,2,3 };
	int b[] = { 9,10,'j' };
	int c[] = { 'Q','K','A' };

	int *p[3] = { a,b,c };

	//printf("%p\n", p[1]);
	//printf("%p\n", *(p+1));

	//printf("%d\n", sizeof(p));
	//printf("Ԫ�ظ�����%d\n", sizeof(p) / sizeof(p[0]));
	//printf("Ԫ�ظ�����%d\n", sizeof(p) / sizeof(int*));
}