#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//��ά������Ϊ���������ɻ�Ϊָ��ʱ��ʧ�о���
//void fun02(int **p)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			//printf("%d\n", p[i][j]);
//	}
//}

//��ά������Ϊ������������к��еľ���
//void fun02(int arr[3][3])
//{
//	//printf("�����С��%d\n", sizeof(arr));//4  12  36
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d\n", arr[i][j]);
//	}
//}
//��ά������Ϊ������������еľ���
//void fun02(int arr[][3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d\n", arr[i][j]);
//	}
//}
//��ά������Ϊ�������������˻�Ϊָ������  ��Ҫд��(*p)[3] ��Ϊ���޼���[]����*
void fun02(int (*p)[3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d\n", p[i][j]);
	}
}

int main05()
{
	int arr[3][3] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };

	fun02(arr);

	return EXIT_SUCCESS;
}