#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


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
	L->data = (int*)malloc(sizeof(int) * InitSize);//f����洢�ռ�
	L->len = 0;//˳����ʼ����Ϊ0
	L->MaxSize = InitSize;//˳����������
}





//˳���ϰ�� 01-14

//01
int DeleteMin(SqList* L, int* min)
{
	//�ж��Ƿ�Ϊ��
	if (L->len == 0)
	{
		return 0;
	}
	//�ҵ���СԪ�ص��±꣨����̨��
	int min = L->data[0];
	int xiabiao = 0;
	int j = 0;
	for (j = 1;j < L->len;j++)
	{
		if (L->data[j] < min)
		{
			min = L->data[j];
			xiabiao = j;
		}
	}
	//ɾ����СԪ��
	 L->data[xiabiao] = L->data[L->len - 1];
	 //��-1
	 L->len--;
	 return 1;

}


//02

void Reverse(SqList* L)
{
	int i = 0;
	int j = L->len - 1;
	for (i = 0,j = L->len - 1;i < j;i++,j--)
	{
		int temp = L->data[i];
		L->data[i] = L->data[j];
		L->data[j] = temp;
	}
}


//03  �����벻�����⣡������������������������

//��һ
void del_x_1(SqList* L, int x)
{
	int k = 0;//�� k����¼������x��Ԫ�صĸ�����ͬʱ��K��ʾ������x��Ԫ�ص��±�
	int i = 0;
	for (i = 0;i < L->len;i++)
	{
		if (L->data[i] != x)
		{
			L->data[k] = L->data[i];
			k++;//��һ����Ϊx��Ԫ�أ�k��+1
		}
	}
	L->len = k;//˳���ĳ���Ϊk
}


//����
void del_x_2(SqList* L,int x)
{
	int k = 0;//��¼����x�ĸ�����ͬʱ��ʾԪ��ǰ�Ƶĸ���
	int i = 0;
	for (i = 0;i < L->len;i++)
	{
		if (L->data[i] == x)
		{
			k++;
		}
		else
		{
			L->data[i - k] = L->data[i];//��������x��Ԫ��ǰ��K��λ��
		}
	}
	L->len -= k;
}

//����---��ı�˳�����Ԫ�ص�˳��
void del_x_3(SqList* L,int x)
{
	int i = 0;
	int j = L->len - 1;
	while (i <= j)//�жϵ���L-data[i]�Ƿ�Ϊx����j�������һ��Ԫ�أ�iҪȡ�����һ��Ԫ�ز������жϣ�����Ҫȡ�Ⱥţ�ͬʱ��ʱ�±�i���Ǳ�ĳ��ȣ��ܾ���
	{
		if (L->data[i] == x)
		{
			if (L->data[j] == x)
			{
				j--;
			}
			else
			{
				L->data[i] = L->data[j];
				j--;
				i++;//��ʱL->data[i]����x��i + 1
			}
		}
		else
		{
			i++;//L->data[i]����x��i+1
		}
	}
	L->len = i;//i����ɾ����ĳ���
}