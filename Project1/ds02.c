#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//定义单链表结构体类型

typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;

//初始化不带头节点的单链表
int Initlist1(Linklist* L)
{
	*L = NULL;
	return 1;
}


//初始化带头结点的单链表
int Initlist2(Linklist* L)
{
	*L = (Lnode*)malloc(sizeof(Lnode));
	if (*L == NULL)
	{
		return 0;//	内存分配失败
	}
	(*L)->next = NULL;
}


int main()
{
	Linklist L;  //创建一个单链表
	Initlist2(&L);//初始化单链表
	return 0;
}