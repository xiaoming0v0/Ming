#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct Dnode
{
	int data;
	struct Dnode* next;
	struct Dnode* prior;
}Dnode,*DLinklist;
//˫����

//��ʼ��˫������ͷ��㣩
int InitDLinkList(DLinklist* L)
{
	(*L) = (DLinklist)malloc(sizeof(Dnode));
	if (*L == NULL)
	{
		return 0;//�ڴ治�㣬����ʧ��
	}
	(*L)->next = NULL;
	(*L)->prior = NULL;
	return 0;
}



//˫����Ĳ���
//��p���֮�����s�ڵ�
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

//˫�����ɾ��
//ɾ��ָ���ڵ�P�ĺ�̽ڵ�
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





//ɾ������˫����
void DeleteList(DLinklist* L)
{
	while ((*L)->next != NULL)//ѭ���ͷŸ����ڵ�
	{
		DeleteNextDNode(&L);
	}
	free(*L);//ɾ��ͷ�ڵ�
	*L = NULL;//ͷָ��ָ��NULL
}
int main()
{

	return 0;
}