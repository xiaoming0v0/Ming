#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���嵥����ṹ������

typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;

//��ʼ������ͷ�ڵ�ĵ�����
int Initlist1(Linklist* L)
{
	*L = NULL;
	return 1;
}


//��ʼ����ͷ���ĵ�����
int Initlist2(Linklist* L)
{
	*L = (Lnode*)malloc(sizeof(Lnode));
	if (*L == NULL)
	{
		return 0;//	�ڴ����ʧ��
	}
	(*L)->next = NULL;
}


int main()
{
	Linklist L;  //����һ��������
	Initlist2(&L);//��ʼ��������
	return 0;
}