#pragma once
typedef struct LINKNODE
{
	int data;

	struct LINKNODE * next;

}LinkNode;


//º¯ÊýÉùÃ÷
LinkNode * InitLinkList();
void ForeachLinkList(LinkNode * head);
void InsertLinkList(LinkNode * head, int val, int data);
void DeleteLinkNode(LinkNode * head, int val);
void DestroyLinkList(LinkNode * head);

