#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ѭ������


//����һ��ѭ������������
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;


//��ʼ��ѭ����������ͷ��㣩
int InitList(Linklist* L)
{
	*L = (Linklist)malloc(sizeof(Lnode));
	if (*L == NULL)//�ڴ治�㣬����ʧ��
	{
		return 0;
	}	
	(*L)->next = *L;
	return 1;
}

//�ж�ѭ���������Ƿ�Ϊ��
int Empty(Linklist L)
{
	if (L->next == L)
	{
		return 1;
	}
	return 0;
}

//�жϽڵ�p�Ƿ�Ϊѭ�������β���ڵ�
int IsTail(Linklist L,Lnode* p)
{
	if (p->next == L)
	{
		return 1;
	}
	return 0;
}






//����ѭ��˫��������
typedef struct DLinklist
{
	int data;
	struct DLinklist* next, * prior;
}DNode,*DLinklist;

//��ʼ��ѭ��˫����

int InitDLinklist(DLinklist* L)
{
	*L = (DNode*)malloc(sizeof(DNode));//ͷ�ڵ�
	if (*L == NULL)//�ڴ治�㣬����ʧ��
	{
		return 0;
	}
	(*L)->next = *L;
	(*L)->prior = *L;

}

//�ж�ѭ��˫�����Ƿ�Ϊ��
int Empty2(DLinklist L)
{
	if (L->next == L)
	{
		return 1;
	}
	return 0;
}

//�ж��Ƿ�Ϊβ�ڵ�
int IsTail2(DLinklist L,DNode* p)
{
	if (p->next == L)
	{
		return 1;
	}
	return 0;
}

//ѭ��˫����Ĳ���
//����Ҫ���������һ���ڵ���ʱ���һ���ڵ���治��Ҫ��ǰ���ڵ�����

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

//ѭ��˫�����ɾ��
//�����ԭ������

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