#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "LinkList.h"


int main03()
{
	LinkNode * head = InitLinkList();

	//printf("%d\n", head->next->data);


	ForeachLinkList(head);

	int val;
	int data;
	printf("�������������λ�õ�ֵ\n");
	scanf("%d",&val);
	printf("������Ҫ�����ֵ\n");
	scanf("%d", &data);

	InsertLinkList(head, val, data);
	ForeachLinkList(head);

	int delVal;
	printf("ɾ���Ľڵ�ֵ\n");
	scanf("%d", &delVal);

	DeleteLinkNode(head, delVal);

	ForeachLinkList(head);


	DestroyLinkList(head);
	return EXIT_SUCCESS;
}