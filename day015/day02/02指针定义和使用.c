#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main0201()
{
	//�������� * ����
	//p��ָ�����ͱ���
	int a = 10;
	int* p;
	p = &a;//p���յ��ǵ�ַ  ��ַ���ڴ��ϱ��  unsigned int  ʮ������

	*p = 100;

	printf("%d\n", a);


	return EXIT_SUCCESS;
}


int main0202(void)
{
	//ָ�������ָ��
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//����������������׵�ַ  ��ͬ�� &arr[0] ��һ������
	//arr = 100;//err
	int* p;
	p = arr;
	////ͨ��ָ���Ӳ�������
	//printf("%d\n", *p);
	////��Ϊp��int*���͵�  ÿ���ڽ���++  -- ��������һ��sizeof��int����С
	//p++;
	//printf("%d\n", *p);



	//���Խ�ָ��p������������������
	//arr[i]
	//printf("%d\n", p[0]);
	//printf("%d\n", p[1]);


	printf("%d\n", *(p + 0));
	printf("%d\n", *(p + 1));
	return 0;
}

struct stu
{
	int a;
	char b;
};
int main0203(void)
{
	//ָ��Ĵ�С:
	//��32λϵͳ����4���ֽ�
	//��64Ϊϵͳ����8���ֽ�
	int* p;
	char* p1;
	double* p2;
	int*** p3;

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(struct stu *));
	printf("%d\n", sizeof(float****));
	printf("%d\n", sizeof(void*));


	return 0;
}
