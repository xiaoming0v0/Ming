#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//˳���

//����˳���ṹ������

// ����˳�����󳤶�
#define InitSize 10
//��̬����
typedef struct
{
	int data[InitSize];
	int len;//˳���ĳ���
}SqList;//��˳���������ΪSqlist

//��̬����
typedef struct
{
	int* data;//��̬���������ָ��
	int len;//����ĵ�ǰ����
	int MaxSize;//������������
}SeqList;

//˳���ĳ�ʼ��

//��̬
void InitList(SqList* L)
{
	L->len = 0;//˳���ĳ�ʼ����Ϊ0
}

//��̬
void InitList2(SeqList* L)
{
	L->data = (int*)malloc(sizeof(int)*InitSize);//f����洢�ռ�
	L->len = 0;//˳����ʼ����Ϊ0
	L->MaxSize = InitSize;//˳����������
}


//˳���Ĳ������

//��̬����
int ListInsert(SqList* L, int i, int e)//�ھ�̬�����˳����еĵ�i��λ�ò���e
{
	//�ж�λ��i�Ƿ�Ϸ�
	if (i<0 || i>L->len + 1)
	{
		return 0;
	}
	if (L->len >=InitSize)//�ռ����������ܲ���
	{
		return 0;
	}
	int j = 0;
	for (j =L->len;j >=i;j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;
	L->len++;
	return 1;
}

//��̬���� ---�뾲̬�����������ȫ��ͬ��ֻ�����ڴ�����ʱ��������·���һ�����Ŀռ�
int InitList2(SeqList* L, int i, int e)
{
	if (i<0 || i>L->len)
	{
		return 0;
	}
	if (L->len >= L->MaxSize)
	{
		//���Ӷ�̬����ĳ���
		int* p = L->data;
		L->MaxSize++;
		L->data = (int*)malloc(sizeof(int) * (L->MaxSize));
		int j = 0;
		for (j = 0;j < L->len;j++)
		{
			L->data[j] = p[j];//p[j]==*(p+j)  ----ָ���������ʾ��ʽ�Ĺ�ϵ����˵����ı���
		}
		free(p);
	}
	int j = 0;
	for (j = L->len;j >= i;j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;
	L->len++;
	return 1;

}

//˳����ɾ������
//��̬�뾲̬��ͬ
int ListDelete(SqList* L, int i, int* e)//ɾ��˳���ĵ�i��Ԫ�أ�����������
{
	if (i<0 || i>L->len)
	{
		return 0;
	}
	e = L->data[i - 1];
	int j = 0;
	for (j = i - 1;j < L->len - 1;j++)
	{
		L->data[j] = L->data[j+1];
	}
	L->len--;
	return 1;

}


//˳���İ�ֵ����
//�ڱ��в��ҵ�һ��Ԫ��ֵ��e��Ԫ�أ���������λ��
int LocateElem(SqList L, int e, int i)
{
	int j = 0;
	for (j = 0;j < L.len;j++)
	{
		if (L.data[j] == e)
		{
			return j + 1;
		}
	}
	return 0;
}





int main()
{
	SqList L;//����һ����̬�����˳���
	return 0;
}