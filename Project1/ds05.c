#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//循环链表


//声明一个循环单链表类型
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;


//初始化循环单链表（带头结点）
int InitList(Linklist* L)
{
	*L = (Linklist)malloc(sizeof(Lnode));
	if (*L == NULL)//内存不足，分配失败
	{
		return 0;
	}	
	(*L)->next = *L;
	return 1;
}

//判断循环单链表是否为空
int Empty(Linklist L)
{
	if (L->next == L)
	{
		return 1;
	}
	return 0;
}

//判断节点p是否为循环链表的尾部节点
int IsTail(Linklist L,Lnode* p)
{
	if (p->next == L)
	{
		return 1;
	}
	return 0;
}






//声明循环双链表类型
typedef struct DLinklist
{
	int data;
	struct DLinklist* next, * prior;
}DNode,*DLinklist;

//初始化循环双链表

int InitDLinklist(DLinklist* L)
{
	*L = (DNode*)malloc(sizeof(DNode));//头节点
	if (*L == NULL)//内存不足，分配失败
	{
		return 0;
	}
	(*L)->next = *L;
	(*L)->prior = *L;

}

//判断循环双链表是否为空
int Empty2(DLinklist L)
{
	if (L->next == L)
	{
		return 1;
	}
	return 0;
}

//判断是否为尾节点
int IsTail2(DLinklist L,DNode* p)
{
	if (p->next == L)
	{
		return 1;
	}
	return 0;
}

//循环双链表的插入
//不需要考虑在最后一个节点后插时最后一个节点后面不需要有前驱节点的情况

int InsertNextDNode(DNode* p,DNode* s)
{
	if (p == NULL || s == NULL)
	{
		return 0;
	}
	s->next = p->next;
	s->prior = p;
	p->next->prior = s;
	p->next = s;
	return 1;
}

//循环双链表的删除
//与插入原理类似

int DeleteNextDNode(DNode* p)
{
	DNode* q = p->next;
	if (q == NULL)
	{
		return 0;
	}
	p->next = q->next;
	q->next->prior = q;
	free(q); 
	return 1;
}