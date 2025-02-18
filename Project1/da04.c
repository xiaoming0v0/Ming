#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct Dnode
{
	int data;
	struct Dnode* next;
	struct Dnode* prior;
}Dnode,*DLinklist;
//双链表

//初始化双链表（带头结点）
int InitDLinkList(DLinklist* L)
{
	(*L) = (DLinklist)malloc(sizeof(Dnode));
	if (*L == NULL)
	{
		return 0;//内存不足，分配失败
	}
	(*L)->next = NULL;
	(*L)->prior = NULL;
	return 0;
}



//双链表的插入
//在p结点之后插入s节点
int InsertNextDnode(Dnode* p,Dnode* s)
{
	if (p == NULL || s == NULL)
	{
		return 0;
	}
	s->next = p->next;
	if (p->next != NULL)
	{
		p->next->prior = s;
	}
	p->next = s;
	s->prior = p;
	return 1;
}

//双链表的删除
//删除指定节点P的后继节点
int DeleteNextDNode(Dnode* p)
{
	if (p == NULL)
	{
		return 0;
	}
	Dnode* q = p->next;
	if (q == NULL)
	{
		return 0;
	}
	if (q->next != NULL)
	{
		q->next->prior = p;
	}
	p = q->next;
	free(q);
	return 0;
}





//删除整个双链表
void DeleteList(DLinklist* L)
{
	while ((*L)->next != NULL)//循环释放各个节点
	{
		DeleteNextDNode(&L);
	}
	free(*L);//删除头节点
	*L = NULL;//头指针指向NULL
}
int main()
{

	return 0;
}