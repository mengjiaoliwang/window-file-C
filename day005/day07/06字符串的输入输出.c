#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main601()
{

	//char buf[100];
	//char arr[100];
	//int a;
	//int b;
	//int c;
	//1��scanf("%s", buf);ͨ�����̻�ȡһ���ַ��� �����ո���߻��оͽ���
	//2��gets(buf);ͨ�����̻�ȡһ���ַ��� �����ļ�������־���߻��оͽ���
	//gets(buf);
	//1��ֻ���ܻ�����Ϊ����
	//scanf("%[^\n]", buf);
	//2������������ֱ�ʾ���ܸ���
	//scanf("%11[^\n]%12[^\n]", buf,arr);
	//3������Ҫ���ܵ��ַ���*������
	//scanf("%*3c%d", &a);
	//4���涨���ִ�С���ݸ���ȥ����
	//scanf("%2d%3d%1d", &a, &b, &c);



	//printf("%s\n", buf);
	//printf("%s\n", arr);
	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);
	return EXIT_SUCCESS;
}

int main602(void)
{
	//fgets��һ�ְ�ȫ�Ĳ���  ������Ϊ�û������뵼�³��򱨴�
	//fgets�������ݵ����ֵ�����鳤��-1 ĩβ��Ҫ���\0
	//fgets��������С�����ֵ���Ὣ\n��Ϊ�ַ����д洢
	//char buf[10];
	//fgets(buf, sizeof(buf), stdin);


	//printf("%s", buf);
	//puts(buf);

	fputs("hello world", stdout);
	return 0;
}