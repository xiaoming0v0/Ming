#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//˳���
//������ʣ�����ʱ�临�Ӷ�Ϊo(1)

#define InitSize 10
//�����ṹ��
typedef struct
{
	int data[InitSize];//��̬������Ԫ��
	int len;//˳���ǰ����
}Static_Sqlist;//˳������Ͷ���

typedef struct
{
	int* data;//ָ��̬�����ָ�룬�����׵�ַ
	int  MaxSize;//����˳�����󳤶�
	int len;//˳���ǰ����
}Dynamic_Sqlist;
void Static_InitList(Static_Sqlist* L)//��̬��ʼ��
{
	L->len = 0;
}

void Dynamic_InitList(Dynamic_Sqlist* L)//��̬�����ʼ��
{
	L->data = (int*)malloc(sizeof(int) * InitSize);
	L->MaxSize =InitSize;
	L->len = 0;
}


int ListInsert(Static_Sqlist* L, int i,int e)//��˳���ĵ�i��λ�ò���Ԫ�أ�ʱ�临�Ӷ�Ϊo(n
{
	if (L->len >= InitSize)//�Ѿ��������޷�����
	{
		return 0;
	}
	if (i<1 || i>L->len+1)//�ж�i��λ���Ƿ���Ч
	{
		return 0;
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
int ListDelete(Static_Sqlist* L, int i, int* e)//��˳���ĵ�i��λ��ɾ��Ԫ�أ� ʱ�临�Ӷ�Ϊo(n)
{
	if (i<1 || i>L->len)//�ж�i��λ���Ƿ���Ч
	{
		return 0;
	}
	*e = L->data[i - 1];
	int j = 0;
	for (j =i-1;j <=L->len-1;j++)
	{
		L->data[j] = L->data[j + 1];
	}
	
	L->len--	;
	return 1;
}
IncreaseSize(Dynamic_Sqlist* L,int x)//���Ӷ�̬���鳤��
{
	int* p = L->data;
	L->data = (int*)malloc(sizeof(int) * (InitSize + x));
	int i = 0;
	for (i = 0;i < L->len;i++)
	{
		/**L->data = *p;
		p++;
		L->data++;*/
		L->data[i] = p[i];
	}
	L->MaxSize += x;
	free(p);
	
}

int GetElem1(Dynamic_Sqlist* L, int i)//��λ����
{
	return L-> data[i - 1];
}


int GetElem2(Dynamic_Sqlist* L, int e)//��ֵ����,  ʱ�临�Ӷ�o��n��
{
	int i = 0;
	for (i = 0;i < L->len;i++)
	{
		if (L->data[i] == e)
		{
			return i + 1;
		}
	}
	return 0;
	
}


int main()
{
	
	Static_Sqlist L1;//����һ��˳���
	Static_InitList(&L1);//��̬�����ʼ��˳���

	Dynamic_Sqlist L2;//����˳���
	Dynamic_InitList(&L2);//��̬�����ʼ��˳���
	
	//ʡ�Բ���---��˳��������Ԫ��

	if (ListInsert(&L1, 3, 3))		//�������в���һ��Ԫ��
	{
		printf("����ɹ�");
	}
	else
	{
		printf("����ʧ��");
	}

	int e = -1;
	if (ListDelete(&L1, 3, &e))		//��������ɾ��һ��Ԫ��,��˵����ʲô
	{
		printf("ɾ���ɹ�");
	}
	else
	{
		printf("ɾ��ʧ��");
	}

	IncreaseSize(&L2, 5);//���Ӷ�̬����ĳ���

	int i = 0;
	int a = GetElem1(&L2, i);//��λ����Ԫ��

	int e = 0;
	scanf("%d", &e);
	if (GetElem2(&L2, e))		//��ֵ����Ԫ��
	{
		printf("�ҵ������ǵ�%d��", GetElem2(&L2, e));
	}
	else
	{
		printf("δ�ҵ�");
	}
	
	return 0;
}
