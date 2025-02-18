#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������Ĳ����ɾ��
//�ﵽ�Խڵ����ݵ��޸ļ��ɣ���Ҫ�����޸Ľڵ�����
//ע�ⲻ��ͷ�ڵ�ʱ�Ե�һ���ڵ���޸���Ҫ�ı�ͷָ��

//����һ��������ṹ������
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;


//������庯��
int InsertNextLnode(Lnode*,int);

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
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
	//43-53�д�������ú�庯������
	//return InsertNextLnode(p,e)

}






//��λ��ɾ��
int ListDelete(Linklist L, int i, int* e)
{
	if (i < 1)
	{
		return 0;
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i-1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return 0;
	}
	if (p->next == NULL)//��I-1�����֮�����������ڵ�
	{
		return 0;
	}
	Lnode* q = p->next;
	 
	p->next = q->next;
	*e = q -> data;
	free(q);
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

	
	if (i = 1)//����ͷ���Ļ�����Ҫ����ͷָ��
	{
		s->next = (*L)->next;
		(*L)->next = s;
		s->data = e;
	}

	Lnode* p = *L;
	int j = 1;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)//i������������+1
	{
		return 0;
	}
	s->next = p->next;
	s->data = e;
	p->next = s;
	return 1;
		

	

}






//ָ���ڵ�ĺ�����


int InsertNextLnode(Lnode* p, int e)
{
	if (NULL == p)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	if (NULL == s)//�ڴ治��
	{
		return 0;
	}
	s->next = p->next;
	s->data = e;
	p->next = s;
}



//ָ���ڵ��ǰ�����
//��һ��͵�컻��
int InsertPriorLnode(Lnode* p, int e)
{
	if (NULL == p)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	if (NULL == s)
	{
		return 0;
	}
	s->data = p->data;
	p->data = e;
	s->next = p->next;
	p->next = s;
}
//������ѭ���ҵ�p�ڵ����ǰ���ڵ㣬Ȼ�����ʵʩ������







//ָ���ڵ��ɾ��
//��һ��͵�컻�� (��ȱ�ݣ�����ɾ�����һ������jj)
int DeleteNode(Lnode* p, int* e)
{
	if (NULL == p && p->next ==NULL)
	{
		return 0;
	}
	Lnode* q = p->next;
	p->next = q->next;
	*e = q->data;
	p->data = q->data;
	free(q);

	
}
//������ѭ�������ҵ�ָ���ڵ�(ɾ�����һ�����ô˷�����
int DeleteNode2(Linklist L,Lnode* p, int* e)
{
	if (NULL == p)
	{
		return 0;
	}
	Lnode* s = L;
	int j = 0;
	while (s != NULL && s->next != p)
	{
		s = s->next;
	}
	s = p -> next;
	*e = p->data;
	free(p);
}





//������Ĳ���

//��λ����(��ͷ���)
Lnode* GetElem(Linklist L, int i)
{
	if (i < 1)
	{
		return NULL;
	}
	Lnode* p = L;
	int j = 0;
	while (p != NULL && j < i)
	{
		p = p->next;
	}
	return p;

}

//����ͷ�ڵ�
Lnode* GetElem(Linklist L, int i)
{
	if (i < 1)
	{
		return NULL;
	}
	Lnode* p = L;
	int j = 1;
	while (p != NULL && j < i)
	{
		p = p->next;
	}
	return p;
}


//��ֵ����
//��ͷ�ڵ�

Lnode* LocateElem(Linklist L,int e)
{
	Lnode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}

//����ͷ���
Lnode* LocateElem2(Linklist L, int e)
{
	Lnode* p = L;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}



//���ĳ���
//��ͷ�ڵ�
int Length(Linklist L)
{
	int len = 0;
	Lnode* p = L->next;
	while (p != NULL)
	{
		len++;
		p = p->next;

	}
	/*	Lnode* p = L;
	while (p->next != NULL)
	{
	    p = p->next;
		len++;
	}*/

	return len;
}

//����ͷ���

int Length2(Linklist L)
{
	int len = 0;
	Lnode* p = L;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return len;
}





//β�巨����������
//��ͷ���
Linklist List_TailInsert(Linklist* L)
{
	*L = (Linklist)malloc(sizeof(Lnode));//��ʼ������ͷ�ڵ�
	Lnode* r, * s;
	r = *L;//rʼ��ָ�����һ���ڵ�
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (Lnode*)malloc(sizeof(Lnode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("d%", &x);
	}
	r->next = NULL;
	return *L;


}

//����ͷ���
//��һ��
Linklist List_TailInsert2_0(Linklist* L)
{
	*L = NULL;
	Lnode* r, * s;

	int x = 0;
	scanf("%d", &x);
	if (x != 9999)
	{
		*L = (Linklist)malloc(sizeof(Lnode));
		(*L)->data = x;
		(*L)->next = NULL;
		r = *L;
	}
	else
	{
		return *L;
	}
	

	while (1)
	{
		scanf("%d", &x);
		if (x == 9999)
		{
			break;
		}
		s = (Lnode*)malloc(sizeof(Lnode));
		s->data = x;
		r->next = s;
		r = s;
		
	}
	r->next = NULL;
	return *L;
}

//���������õķ���
Linklist List_TailInsert2_1(Linklist* L)
{
	*L = NULL;
	Lnode* s, * r;
	
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (Lnode*)malloc(sizeof(Lnode));
		s->data = x;
		if (*L == NULL)
		{
			*L = s;
			
		}
		else
		{
			r->next = s;
			
		}
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return *L;
}






//ͷ�巨����������
//��ͷ���
Linklist List_HeadInsert(Linklist* L)
{
	*L = (Linklist)malloc(sizeof(Lnode));
	(*L)->next = NULL;
	Lnode* s = NULL;
	s = (Lnode*)malloc(sizeof(Lnode));
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)
	{
		s->data = x;
		s->next = (*L)->next;
		(*L)->next = s;
		scanf("%d", &x);
	}
	return *L;
}
//����ͷ�ڵ�
Linklist List_HeadInsert2(Linklist* L)
{
	*L = NULL;//��ʼ��Ϊ��ָ��
	Lnode* s =NULL;//�����ڵ�
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (Lnode*)malloc(sizeof(Lnode));
		s->data = x;
		s->next = *L;
		*L = s;

	
	}
}
int main()
{
	Linklist L;
	Initlist1(&L);//��ʼ����ͷ�ڵ㵥����
	
	/*int i = 0;
	int e = 0;
	ListInsert(&L, i, e);//�ڵ�i��λ�ò���Ԫ��e*/
	return 0;
}