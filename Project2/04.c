#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MaxSize 10
typedef struct
{
	int data[MaxSize];//为顺序表分配一块连续的内存空间
	int len;//顺序表当前长度
}SqList;
//顺序表习题
//03
//法一
void Del_x(SqList* L,int x)
{
	int k = 0;//用k来记录顺序表中元素值为x的个数
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
//法二
void Del_x_2(SqList* L, int x)
{
	int i = 0;//创建头指针
	int j = L->len - 1;//创建尾指针
	while (i <= j)//通过i访问每一个不为x的元素
	{
		if (L->data[i] == x)//下表为i的元素是x
		{
			if (L->data[j] != x)//下表为j的元素不是x
			{
				L->data[i] = L->data[j];//将下表为j的元素移到下表为i的元素中
				i++;//i继续向后遍历
				j--;//j减一
			}
			else
			{
				j--;//下表为j的元素也是x，j向前遍历找到不为x为止
			}
		}
		else
		{
			i++;//i不是x，继续向后遍历
		}
	}
	L->len = i;//i加了几次，长度就是几
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

//答案
int Del_Same_2(SqList* L)
{
	if (L->len == 0)
	{
		return 0;
	}
	int i = 0;
	int j = 0;
	for (j = 1;j < L->len;j++)//用i来记录没有重复之的元素，j当作工作指针
	{
		if (L->data[i] != L->data[j])
		{
			L->data[++i] = L->data[j];
		}

	}
	L->len = i + 1;
	return 0;
}



//双指针法
//一个指针用来记录
//另一个指针用来当作工作指针



//06
