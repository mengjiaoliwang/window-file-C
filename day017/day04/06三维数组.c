#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//����ָ����Ϊ�������� ��Ҫд�к��еľ���
void   fun03(int p[2][3][4])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				printf("%d ", p[i][j][k]);
			}
			printf("\n");
		}
	}
}
//void   fun03(int p[][3][4]);
//void   fun03(int (*p)[3][4]);
int main06()
{
	//OpenGL3D
	//����Ա����ά�ռ����
	int arr[2][3][4]=
	{
		{
			{1,2,3,4},
			{2,3,4,5},
			{3,4,5,6}
		},
		{
			{4,5,6,7},
			{5,6,7,8},
			{6,7,8,9}
		}
	};


	//�㣺
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//��
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//��
	printf("%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));

	fun03(arr);

	return EXIT_SUCCESS;
}