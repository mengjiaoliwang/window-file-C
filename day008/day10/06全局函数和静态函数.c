#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//����ں�������ʱ��û���κ����ξͳ�Ϊȫ�ֺ���
//������������Ŀ�������ļ�
//�������ڣ����������ڼ�
void fun07()
{
	return;
}
/*��̬����
�����򣺵�ǰ�ļ���
�������ڣ����������ڼ�

*/
static int fun08()
{
	printf("hello world\n");
	return 1;
}

void fun09()
{
	int val = fun08();
	printf("%d\n", val);
}

int main06()
{
	//fun09();
	fun10();
	return EXIT_SUCCESS;
}