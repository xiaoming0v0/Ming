#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MaxSize 10
typedef struct
{
	int data[MaxSize];//Ϊ˳������һ���������ڴ�ռ�
	int len;//˳���ǰ����
}SqList;
//˳���ϰ��
//03
//��һ
void Del_x(SqList* L,int x)
{
	int k = 0;//��k����¼˳�����Ԫ��ֵΪx�ĸ���
	int i = 0;
	for (i = 0;i < L->len;i++)
	{
		if (L->data[i] == x)
		{
			k++;
		}
		else
		{
			L->data[i-k] = L->data[i];
		}
		L->len -= k;
	}

}
//����
void Del_x_2(SqList* L, int x)
{
	int i = 0;//����ͷָ��
	int j = L->len - 1;//����βָ��
	while (i <= j)//ͨ��i����ÿһ����Ϊx��Ԫ��
	{
		if (L->data[i] == x)//�±�Ϊi��Ԫ����x
		{
			if (L->data[j] != x)//�±�Ϊj��Ԫ�ز���x
			{
				L->data[i] = L->data[j];//���±�Ϊj��Ԫ���Ƶ��±�Ϊi��Ԫ����
				i++;//i����������
				j--;//j��һ
			}
			else
			{
				j--;//�±�Ϊj��Ԫ��Ҳ��x��j��ǰ�����ҵ���ΪxΪֹ
			}
		}
		else
		{
			i++;//i����x������������
		}
	}
	L->len = i;//i���˼��Σ����Ⱦ��Ǽ�
}


//04
int  Del_s_t(SqList* L, int s, int t)
{
	if (s >= t || L->len==0)
	{
		return 0;
	}
	int i = 0;
	int k = 0;
	while (i < L->len)
	{
		if (s <= L->data[i] && L->data[i] >= t)
		{
			k++;
		}
		else
		{
			L->data[i - k] = L->data[i];
		}
	}
	L->len -= k;
	return 1;

}

//05
void Del_Same(SqList* L)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < L->len;i++)
	{
		if (L->data[i] == L->data[i + 1])
		{
			int j = 0;
			for (j = i + 1;j < L->len-1;j++)
			{
				L->data[j] = L->data[j + 1];
			}
			i--;
			L->len--;
		}
		
		
		/*int k = 0;
		for (j = i+1;j < L->len;j++)
		{
			if (L->data[i] == L->data[j])
			{
				k++;
			}
			else
			{
				L->data[j - k] = L->data[j];
			}
		}
		L->len -= k;*/
	}
}

void Del_Same_1(SqList* L)
{
	int i = 0;
	int k = 0;
	for (i = 1;i < L->len;i++)
	{
		if (L->data[i] == L->data[i - 1])
		{
			k++;
		}
		else
		{
			L->data[i - k] = L->data[i];
		}
	}
	L->len -= k;
}

//��
int Del_Same_2(SqList* L)
{
	if (L->len == 0)
	{
		return 0;
	}
	int i = 0;
	int j = 0;
	for (j = 1;j < L->len;j++)//��i����¼û���ظ�֮��Ԫ�أ�j��������ָ��
	{
		if (L->data[i] != L->data[j])
		{
			L->data[++i] = L->data[j];
		}

	}
	L->len = i + 1;
	return 0;
}



//˫ָ�뷨
//һ��ָ��������¼
//��һ��ָ��������������ָ��



//06
