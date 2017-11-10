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
	printf("请输入插入数据位置的值\n");
	scanf("%d",&val);
	printf("请输入要插入的值\n");
	scanf("%d", &data);

	InsertLinkList(head, val, data);
	ForeachLinkList(head);

	int delVal;
	printf("删除的节点值\n");
	scanf("%d", &delVal);

	DeleteLinkNode(head, delVal);

	ForeachLinkList(head);


	DestroyLinkList(head);
	return EXIT_SUCCESS;
}