#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main07()
{
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };
	int arr[2][3] = { {1,2,3},{2,3,4} };//err
	//ָ������Ͷ�ά�������������
	int* p[3] = { a,b,c };
	//printf("%p\n", p[0]);


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			//������±���Ե���* ��ʹ�ö��ǽ���ָ��ά�ȵ�
			//��ά����
			printf("%d\n", p[i][j]);
			//ָ��
			printf("%d\n", *(*(p + i) + j));
			//����ָ����
			printf("%d\n", *(p[i] + j));
		}
	}

	return EXIT_SUCCESS;
}