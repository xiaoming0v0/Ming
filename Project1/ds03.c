#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//单链表的插入和删除


//声明一个单链表结构体类型
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;



//带头结点
//初始化带头结点单链表
int InitList1(Linklist* L)
{
	*L = (Lnode*)malloc(sizeof(Lnode));
	if (*L == NULL)
	{
		return 0;
	}
	(*L)->next = NULL;

}
 
//按位序插入
int ListInsert1(Linklist L, int i, int e)
{
	if (i < 1)
	{
		return 0;
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)//找到第i-1个节点
	{
		p = p->next;
		j++;
	}
	if (p == NULL)//i超出了链表长度+1
	{
		return 0; 
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	s->data = p->data;
	s->next = p->next;
	p->next = s;
	return 1;


}




//不带头结点
//初始化不带头结点单链表
int Initlist2(Linklist* L)
{
	*L = NULL;
	return 1;
}

//按位序插入
int ListInsert2(Linklist* L, int i, int e)
{
	if (i < 1)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));

	Lnode* p = *L;
	if (i = 1)
	{
		s->next = p->next;
		p->next = s;
		s->data = e;
	}
	else
	{
		int j = 1;
		while (p != NULL && j < i - 1)
		{
			p = p->next;
			j++;
		}
		if (p == NULL)
		{
			return 0;
		}
		s->next = p->next;
		s->data = e;
		p->next = s;
		return 1;

	}

}

int main()
{
	Linklist L;
	Initlist1(&L);//初始化带头节点单链表
	int i = 0;
	int e = 0;
	ListInsert(&L, i, e);//在第i个位置插入元素e
	return 0;
}