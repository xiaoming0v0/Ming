#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������Ĳ����ɾ��


//����һ��������ṹ������
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;



//��ͷ���
//��ʼ����ͷ��㵥����
int InitList1(Linklist* L)
{
	*L = (Lnode*)malloc(sizeof(Lnode));
	if (*L == NULL)
	{
		return 0;
	}
	(*L)->next = NULL;

}
 
//��λ�����
int ListInsert1(Linklist L, int i, int e)
{
	if (i < 1)
	{
		return 0;
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)//�ҵ���i-1���ڵ�
	{
		p = p->next;
		j++;
	}
	if (p == NULL)//i������������+1
	{
		return 0; 
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	s->data = p->data;
	s->next = p->next;
	p->next = s;
	return 1;


}




//����ͷ���
//��ʼ������ͷ��㵥����
int Initlist2(Linklist* L)
{
	*L = NULL;
	return 1;
}

//��λ�����
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
	Initlist1(&L);//��ʼ����ͷ�ڵ㵥����
	int i = 0;
	int e = 0;
	ListInsert(&L, i, e);//�ڵ�i��λ�ò���Ԫ��e
	return 0;
}