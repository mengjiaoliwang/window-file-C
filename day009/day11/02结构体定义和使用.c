#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//�ṹ�嶨��
struct stu
{
	//�ṹ���Ա�б�   
	//�ṹ���Ա�б���Բ�ͬ

	char name[21];
	int age;
	char sex;//M F
	int socre;
	char tel[15];

}s = { "���С�������",20,'F',88,"13001991300" };

int main204(void)
{
	printf("������%s\n", s.name);
	printf("���䣺%d\n", s.age);
	printf("�Ա�%s\n", s.sex == 'M' ? "��" : "Ů");
	printf("�ɼ���%d\n", s.socre);
	printf("�绰��%s\n", s.tel);
	return 0;
}


int main203(void)
{
	struct stu s = { .age = 18,.socre = 99,.tel = "13001991200",.name = "���� ������",.sex = 'M' };

	printf("������%s\n", s.name);
	printf("���䣺%d\n", s.age);
	printf("�Ա�%s\n", s.sex == 'M' ? "��" : "Ů");
	printf("�ɼ���%d\n", s.socre);
	printf("�绰��%s\n", s.tel);
	return 0;
}
int main202(void)
{
	struct stu s;
	//s.name = "���桤D������";
	strcpy(s.name, "���桤D������");
	s.age = 18;
	s.sex = 'F';
	s.socre = 100;
	strcpy(s.tel, "13001991100");


	printf("������%s\n", s.name);
	printf("���䣺%d\n", s.age);
	printf("�Ա�%s\n", s.sex == 'M' ? "��" : "Ů");
	printf("�ɼ���%d\n", s.socre);
	printf("�绰��%s\n", s.tel);
	return 0;
}



int main201()
{
	//�����ṹ�����  ��ʼ��ֵ
	//struct stu�ṹ������
	//s �ṹ�����
	struct stu s = { "�����",500,'M',9,"13001991000" };
	//ͨ���ṹ�������.�������ҵ��ṹ���Ա
	printf("������%s\n", s.name);
	printf("���䣺%d\n", s.age);
	printf("�Ա�%s\n", s.sex == 'M' ? "��" : "Ů");
	printf("�ɼ���%d\n", s.socre); 
	printf("�绰��%s\n", s.tel);

	system("pause");
	return EXIT_SUCCESS;
}
