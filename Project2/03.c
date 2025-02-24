#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����

//��������ṹ������

//��ͷ���
typedef struct Lnode
{
	int data; //�������
	struct Lnode* next;//���ָ��
}Lnode,* Linklist;

//������ĳ�ʼ��

//��ͷ���
int InitList(Linklist* L)
{
	*L = (Lnode*)malloc(sizeof(Lnode));//����һ��ͷ���
	if (*L == NULL)
	{
		return 0;//�ڴ治�㣬����ʧ��
	}
	(*L)->next == NULL;
	return 1;

}

//����ͷ���
int InitList_2(Linklist* L)
{
	*L == NULL;
	return 1;
}

//���
//��ͷ���
int Length(Linklist L)
{
	int count = 0;
	while (L->next++ != NULL)
	{
		count++;
	}
	return count;
}

//����ͷ���
int Length_2(Linklist L)
{
	int count = 0;
	while (L++ != NULL)
	{
		count++;
	}
	return count;
}


//��λ�����
//��ͷ���
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

//����ͷ�ڵ�
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


//��ֵ����
//��ͷ���
Lnode* LocateElem(Linklist L, int e)
{
	Lnode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}

//����ͷ���
Lnode* LocateElem_2(Linklist L, int e)
{
	Lnode* p = L;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}


//�������
//��λ�����

//��ͷ���
int ListInsert(Linklist L, int i, int e)
{
	if (i < 1)
	{
		return 0;//iֵΥ��
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)//p�ƶ���i-1�Σ������˵�i-1���ڵ�
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return 0;//i�����˷�Χ
	}
	//�Ե�i-1���ڵ�ʵʩ������
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	s->data = e;
	s->next = p->next;
	p->next = s;

	return 1;

}

//����ͷ���
int ListInsert_2(Linklist* L, int i, int e)//���ܻ��޸�ͷָ�룬����ʹ�ö���ָ�룬�����ԭָ���޸�
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

//ָ���ڵ�ĺ�����
int InsertNextNode(Lnode* p, int e)
{
	if (p == NULL)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	if (s == NULL)
	{
		return 0;//�ڴ治�㣬����ʧ��
	}
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
}


//ָ���ڵ��ǰ�����
//��һ��͵�컻��
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

//������ѭ�������ҵ��ڵ�p��ǰ��������ʵʩ������
/*
a = L;
while (a != NULL && a->next != p)
{
	a = a->next;
}
*/


//ɾ������

//��λ��ɾ��
//��ͷ���
int ListDelete(Linklist L, int i, int* e)//ɾ����i��Ԫ�أ�����������
{
	if (i < 1)
	{
		return 0;//iֵ���Ϸ�
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
		return 0;//i����������ķ�Χ
	}
	Lnode* q = p->next;
	if (q == NULL)
	{
		return 0;//i�����˷�Χ
	}
	p->next = q->next;
	*e = q->data;
	free(q);
	return 1;
}

//����ͷ���
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
		return 0;//iֵ�����˷�Χ
	}
	if (p->next == NULL)
	{
		return 0;//iֵ�����˷�Χ
	}
	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);
}

//ָ���ڵ��ɾ������
//��һ��͵�컻��------������ȱ��-----����ɾ�����һ��Ԫ�أ���˷����в�ͨ
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



//������ѭ���ҵ�ɾ���ڵ��ǰ����Ȼ��ɾ��
//��ͷ���
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

//����ͷ���

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