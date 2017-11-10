#include "LinkList.h"
#include <stdlib.h>
//1、创建链表
/*
结构体
创建头节点
创建新节点存储数据
头节点和新节点建立连接
返回头节点
*/
LinkNode * InitLinkList()
{
	LinkNode * head = (LinkNode *)malloc(sizeof(LinkNode));
	//head->data
	head->next = NULL;

	//当前节点
	LinkNode * p_cur = head;

	int data;
	while (1)
	{
		printf("请输入数据到链表中（-1表示停止）:\n");
		scanf("%d", &data);

		if (data == -1)
		{
			printf("数据录入完毕!\n");
			break;
		}

		//定义新节点存储数据
		LinkNode * newnode = (LinkNode*)malloc(sizeof(LinkNode));
		newnode->data = data;
		newnode->next = NULL;

		//将新节点放在当前节点后
		p_cur->next = newnode;
		//当前节点变为新节点
		p_cur = newnode;

	}

	return head;
}

//2、遍历链表
/*
创建遍历链表函数将头节点作为函数参数传递
创建一个当前节点，用来控制流程
到尾节点停止
打印数据
*/

void ForeachLinkList(LinkNode * head)
{
	if (head == NULL)
		return;
	//定义当前节点控制流程
	LinkNode * p_cur = head->next;

	while (p_cur != NULL)
	{
		//打印数据
		printf("%d\n", p_cur->data);
		//指向下一个节点
		p_cur = p_cur->next;
	}
}

//3、插入节点
/*
遍历链表找到插入的位置
定义两个链表节点一个指向当前链表节点一个指向当前的下一个节点
定义新节点插入数据
定义函数传递三个参数 head val  data
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
		//找到val对应链表的节点
		if (p_cur->data == val)
		{
			break;
		}

	}

	if (p_cur == NULL)
	{
		printf("未找到插入的位置\n");
		return;
	}
	//找到插入位置 定义一个新节点 存放数据
	LinkNode * newnode = (LinkNode*)malloc(sizeof(LinkNode));
	newnode->data = data;
	newnode->next = NULL;


	p_cur->next = newnode;
	newnode->next = p_temp;

	return;
}
//4、删除节点
/*
创建函数传递两个值  head val
循环找到val对应的位置
需要定义两个链表节点
释放堆空间
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
		printf("未找到删除的节点\n");
		return;
	}

	//创建两个节点的链接
	p_cur->next = p_temp->next;

	//释放空间
	free(p_temp);
}
//5、销毁链表
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