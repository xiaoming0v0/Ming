#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//单链表的插入和删除
//达到对节点内容的修改即可，重要的是修改节点内容
//注意不带头节点时对第一个节点的修改需要改变头指针

//声明一个单链表结构体类型
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;


//声明后插函数
int InsertNextLnode(Lnode*,int);

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
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
	//43-53行代码可以用后插函数代替
	//return InsertNextLnode(p,e)

}






//按位序删除
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
	if (p->next == NULL)//第I-1个结点之后已无其他节点
	{
		return 0;
	}
	Lnode* q = p->next;
	 
	p->next = q->next;
	*e = q -> data;
	free(q);
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

	
	if (i = 1)//不带头结点的话，需要更改头指针
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
	if (p == NULL)//i超出了链表长度+1
	{
		return 0;
	}
	s->next = p->next;
	s->data = e;
	p->next = s;
	return 1;
		

	

}






//指定节点的后插操作


int InsertNextLnode(Lnode* p, int e)
{
	if (NULL == p)
	{
		return 0;
	}
	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
	if (NULL == s)//内存不足
	{
		return 0;
	}
	s->next = p->next;
	s->data = e;
	p->next = s;
}



//指定节点的前插操作
//法一：偷天换日
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
//法二：循环找到p节点的其前驱节点，然后对其实施后插操作







//指定节点的删除
//法一：偷天换日 (有缺陷，若是删除最后一个，则jj)
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
//法二：循环遍历找到指定节点(删除最后一个，用此方法）
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





//单链表的查找

//按位查找(带头结点)
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

//不带头节点
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


//按值查找
//带头节点

Lnode* LocateElem(Linklist L,int e)
{
	Lnode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}

//不带头结点
Lnode* LocateElem2(Linklist L, int e)
{
	Lnode* p = L;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}



//求表的长度
//带头节点
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

//不带头结点

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





//尾插法建立单链表
//带头结点
Linklist List_TailInsert(Linklist* L)
{
	*L = (Linklist)malloc(sizeof(Lnode));//初始化创建头节点
	Lnode* r, * s;
	r = *L;//r始终指向最后一个节点
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

//不带头结点
//法一：
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

//法二：更好的方法
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






//头插法建立单链表
//带头结点
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
//不带头节点
Linklist List_HeadInsert2(Linklist* L)
{
	*L = NULL;//初始化为空指针
	Lnode* s =NULL;//创建节点
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
	Initlist1(&L);//初始化带头节点单链表
	
	/*int i = 0;
	int e = 0;
	ListInsert(&L, i, e);//在第i个位置插入元素e*/
	return 0;
}