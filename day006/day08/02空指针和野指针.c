#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/*
һ��ָ��������û�и�ֵ
���Ը�ֵΪ��ָ��
���ܸ�ֵΪҰָ��
*/
int main201()
{
	/*
	Ұָ��
	ָ�������ֵΪһ��Ұָ����򲻻ᱨ��
	����Ұָ���Ӧ�Ŀռ�ᱨ��

	Ұָ����������ڶ����޸�����������ڴ�����  ��Ҫ�ƹ���ȫȨ��
	*/

	int a = 10;
	int* p = &a;

	//ͨ��Ұָ��ı�δ֪�ռ��ֵ
	//�ڴ��ַ���0-255��ϵͳռ�� �������д����
	*p = 100;
	//printf("%d\n", *p);


	return EXIT_SUCCESS;
}

int main202(void)
{
	/*
	��ָ��
	������ָ���Ӧ�Ŀռ�ᱨ��

	�ڳ��򿪱ٶԿռ���ͷź��ÿգ����Ա�֤�������

	*/
	//int* p = ���ٿռ�;

	//����ͷ�Ұָ��Ŀռ�ᱨ��

	//free(p);
	int *p;
	p = NULL;

	free(p);
	//��ֵ
	//*p = 100;
	//printf("%d\n", *p);
	printf("�������\n");
}