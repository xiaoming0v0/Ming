#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 定义顺序表最大长度
#define InitSize 10
//静态分配
typedef struct
{
	int data[InitSize];
	int len;//顺序表的长度
}SqList;//将顺序表重命名为Sqlist

//动态分配
typedef struct
{
	int* data;//动态分配数组的指针
	int len;//数组的当前长度
	int MaxSize;//数组的最大容量
}SeqList;

//顺序表的初始化

//静态
void InitList(SqList* L)
{
	L->len = 0;//顺序表的初始长度为0
}

//动态
void InitList2(SeqList* L)
{
	L->data = (int*)malloc(sizeof(int) * InitSize);//f分配存储空间
	L->len = 0;//顺序表初始长度为0
	L->MaxSize = InitSize;//顺序表最大容量
}





//顺序表习题 01-14

//01
int DeleteMin(SqList* L, int* min)
{
	//判断是否为空
	if (L->len == 0)
	{
		return 0;
	}
	//找到最小元素的下标（打擂台）
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
	//删除最小元素
	 L->data[xiabiao] = L->data[L->len - 1];
	 //表长-1
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


//03  根本想不到的题！！！！！！！！！！！！！

//法一
void del_x_1(SqList* L, int x)
{
	int k = 0;//用 k来记录不等于x的元素的个数，同时用K表示不等于x的元素的下标
	int i = 0;
	for (i = 0;i < L->len;i++)
	{
		if (L->data[i] != x)
		{
			L->data[k] = L->data[i];
			k++;//有一个不为x的元素，k就+1
		}
	}
	L->len = k;//顺序表的长度为k
}


//法二
void del_x_2(SqList* L,int x)
{
	int k = 0;//记录等于x的个数，同时表示元素前移的个数
	int i = 0;
	for (i = 0;i < L->len;i++)
	{
		if (L->data[i] == x)
		{
			k++;
		}
		else
		{
			L->data[i - k] = L->data[i];//将不等于x的元素前移K个位置
		}
	}
	L->len -= k;
}

//法三---会改变顺序表中元素的顺序
void del_x_3(SqList* L,int x)
{
	int i = 0;
	int j = L->len - 1;
	while (i <= j)//判断的是L-data[i]是否为x，而j代表最后一个元素，i要取到最后一个元素并进行判断，所以要取等号；同时此时下标i就是表的长度，很精妙
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
				i++;//此时L->data[i]不是x，i + 1
			}
		}
		else
		{
			i++;//L->data[i]不是x，i+1
		}
	}
	L->len = i;//i就是删除后的长度
}