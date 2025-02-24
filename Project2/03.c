#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//链表

//声明链表结构体类型

//带头结点
typedef struct Lnode
{
	int data; //存放数据
	struct Lnode* next;//存放指针
}Lnode,* Linklist;

//单链表的初始化

//带头结点
int InitList(Linklist* L)
{
	*L = (Lnode*)malloc(sizeof(Lnode));//创建一个头结点
	if (*L == NULL)
	{
		return 0;//内存不足，分配失败
	}
	(*L)->next == NULL;
	return 1;

}

//不带头结点
int InitList_2(Linklist* L)
{
	*L == NULL;
	return 1;
}

//求表长
//带头结点
int Length(Linklist L)
{
	int count = 0;
	while (L->next++ != NULL)
	{
		count++;
	}
	return count;
}

//不带头结点
int Length_2(Linklist L)
{
	int count = 0;
	while (L++ != NULL)
	{
		count++;
	}
	return count;
}


//按位序查找
//带头结点
Lnode* GetElem(Linklist L, int i)
{
	if (i < 1 || L == NULL)
	{
		return NULL;
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

//不带头节点
Lnode* GetElem_2(Linklist L,int i)
{
	if (i < 1 || L == NULL)
	{
		return NULL;
	}
	Lnode* p = L;
	int j = 1;
	for (j = 1;p != NULL && j < i;j++)
	{
		p = p->next;
	}
	return p;
}


//按值查找
//带头结点
Lnode* LocateElem(Linklist L, int e)
{
	Lnode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}

//不带头结点
Lnode* LocateElem_2(Linklist L, int e)
{
	Lnode* p = L;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}


//插入操作
//按位序插入

//带头结点
int ListInsert(Linklist L, int i, int e)
{
	if (i < 1)
	{
		return 0;//i值违法
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)//p移动了i-1次，到达了第i-1个节点
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return 0;//i超出了范围
	}
	//对第i-1个节点实施后插操作
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	s->data = e;
	s->next = p->next;
	p->next = s;

	return 1;

}

//不带头结点
int ListInsert_2(Linklist* L, int i, int e)//可能会修改头指针，所以使用二级指针，方便对原指针修改
{
	if (i < 1)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	if (i == 1)
	{
		s->data = e;
		s->next = *L;
		*L = s;
		return 1;
	}
	Lnode* p = *L;
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
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
}

//指定节点的后插操作
int InsertNextNode(Lnode* p, int e)
{
	if (p == NULL)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	if (s == NULL)
	{
		return 0;//内存不足，分配失败
	}
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
}


//指定节点的前插操作
//法一：偷天换日
int InsertPriorNode(Lnode* p, int e)
{
	if (p == NULL)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	if (s == NULL)
	{
		return 0;
	}
	s->data = p->data;
	p->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
}

//法二：循环遍历找到节点p的前驱，对其实施后插操作
/*
a = L;
while (a != NULL && a->next != p)
{
	a = a->next;
}
*/


//删除操作

//按位序删除
//带头结点
int ListDelete(Linklist L, int i, int* e)//删除第i个元素，并带回其结果
{
	if (i < 1)
	{
		return 0;//i值不合法
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return 0;//i超出了链表的范围
	}
	Lnode* q = p->next;
	if (q == NULL)
	{
		return 0;//i超出了范围
	}
	p->next = q->next;
	*e = q->data;
	free(q);
	return 1;
}

//不带头结点
int ListDelete(Linklist* L, int i, int* e)
{
	if (i < 1 || *L == NULL)
	{
		return 0;
	}
	Lnode* q = NULL;
	if (i == 1)
	{
		q = *L;
		*L = (*L)->next;
		free(q);
	}
	Lnode* p = *L;
	int j = 1;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return 0;//i值超出了范围
	}
	if (p->next == NULL)
	{
		return 0;//i值超出了范围
	}
	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);
}

//指定节点的删除操作
//法一：偷天换日------有致命缺陷-----若是删除最后一个元素，则此方法行不通
int DeleteNode(Lnode* p,int* e)
{
	if (p->next == NULL || p == NULL)
	{
		return 0;
	}
	Lnode* q = p->next;
	p->next = q->next;
	p->data = q->data;
	*e = q->data;
	free(q);
	return 1;
}



//法二：循环找到删除节点的前驱，然后删除
//带头结点
int DeleteNode_2(Linklist L,Lnode* p, int* e)
{
	if (p == NULL ||L == NULL)
	{
		return 0;
	}
	Lnode* s = L;
	while (s != NULL && s->next != p)
	{
		s = s->next;
	}
	s->next = p->next;
	*e = p->data;
	free(p);
	return 1;
}

//不带头结点

int DeleteNode_3(Linklist* L, Lnode* p, int* e)
{
	if (p == NULL || L == NULL)
	{
		return 0;
	}
	if (p == *L)
	{
		*L = (*L)->next;
		free(p);
	}
	Lnode* s = L;
	while (s != NULL && s->next != p)
	{
		s = s->next;
	}
	s->next = p->next;
	*e = p->data;
	free(p);
	return 1;
}