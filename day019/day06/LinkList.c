#include "LinkList.h"
#include <stdlib.h>
//1����������
/*
�ṹ��
����ͷ�ڵ�
�����½ڵ�洢����
ͷ�ڵ���½ڵ㽨������
����ͷ�ڵ�
*/
LinkNode * InitLinkList()
{
	LinkNode * head = (LinkNode *)malloc(sizeof(LinkNode));
	//head->data
	head->next = NULL;

	//��ǰ�ڵ�
	LinkNode * p_cur = head;

	int data;
	while (1)
	{
		printf("���������ݵ������У�-1��ʾֹͣ��:\n");
		scanf("%d", &data);

		if (data == -1)
		{
			printf("����¼�����!\n");
			break;
		}

		//�����½ڵ�洢����
		LinkNode * newnode = (LinkNode*)malloc(sizeof(LinkNode));
		newnode->data = data;
		newnode->next = NULL;

		//���½ڵ���ڵ�ǰ�ڵ��
		p_cur->next = newnode;
		//��ǰ�ڵ��Ϊ�½ڵ�
		p_cur = newnode;

	}

	return head;
}

//2����������
/*
����������������ͷ�ڵ���Ϊ������������
����һ����ǰ�ڵ㣬������������
��β�ڵ�ֹͣ
��ӡ����
*/

void ForeachLinkList(LinkNode * head)
{
	if (head == NULL)
		return;
	//���嵱ǰ�ڵ��������
	LinkNode * p_cur = head->next;

	while (p_cur != NULL)
	{
		//��ӡ����
		printf("%d\n", p_cur->data);
		//ָ����һ���ڵ�
		p_cur = p_cur->next;
	}
}

//3������ڵ�
/*
���������ҵ������λ��
������������ڵ�һ��ָ��ǰ����ڵ�һ��ָ��ǰ����һ���ڵ�
�����½ڵ��������
���庯�������������� head val  data
*/

void InsertLinkList(LinkNode * head, int val, int data)
{
	LinkNode * p_cur = head;
	LinkNode * p_temp = p_cur->next;
	while (p_cur != NULL)
	{
		p_cur = p_temp;
		if (p_temp == NULL)
			break;
		p_temp = p_temp->next;
		//�ҵ�val��Ӧ����Ľڵ�
		if (p_cur->data == val)
		{
			break;
		}

	}

	if (p_cur == NULL)
	{
		printf("δ�ҵ������λ��\n");
		return;
	}
	//�ҵ�����λ�� ����һ���½ڵ� �������
	LinkNode * newnode = (LinkNode*)malloc(sizeof(LinkNode));
	newnode->data = data;
	newnode->next = NULL;


	p_cur->next = newnode;
	newnode->next = p_temp;

	return;
}
//4��ɾ���ڵ�
/*
����������������ֵ  head val
ѭ���ҵ�val��Ӧ��λ��
��Ҫ������������ڵ�
�ͷŶѿռ�
*/
void DeleteLinkNode(LinkNode * head, int val)
{
	LinkNode * p_cur = head;
	LinkNode * p_temp = p_cur->next;
	while (p_temp != NULL)
	{
		if (p_temp->data == val)
		{
			break;
		}
		p_cur = p_temp;
		p_temp = p_temp->next;
	}
	if (p_temp == NULL)
	{
		printf("δ�ҵ�ɾ���Ľڵ�\n");
		return;
	}

	//���������ڵ������
	p_cur->next = p_temp->next;

	//�ͷſռ�
	free(p_temp);
}
//5����������
void DestroyLinkList(LinkNode * head)
{
	LinkNode * p_cur = head;
	while (p_cur != NULL)
	{
		LinkNode * p_temp = p_cur->next;
		free(p_cur);
		p_cur = p_temp;
	}
}