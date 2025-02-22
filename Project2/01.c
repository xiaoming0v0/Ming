#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//顺序表

//声明顺序表结构体类型

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
	L->data = (int*)malloc(sizeof(int)*InitSize);//f分配存储空间
	L->len = 0;//顺序表初始长度为0
	L->MaxSize = InitSize;//顺序表最大容量
}


//顺序表的插入操作

//静态分配
int ListInsert(SqList* L, int i, int e)//在静态分配的顺序表中的第i个位置插入e
{
	//判断位序i是否合法
	if (i<0 || i>L->len + 1)
	{
		return 0;
	}
	if (L->len >=InitSize)//空间已满，不能插入
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

//动态分配 ---与静态分配操作而完全相同，只不过内存满的时候可以重新分配一块更大的空间
int InitList2(SeqList* L, int i, int e)
{
	if (i<0 || i>L->len)
	{
		return 0;
	}
	if (L->len >= L->MaxSize)
	{
		//增加动态数组的长度
		int* p = L->data;
		L->MaxSize++;
		L->data = (int*)malloc(sizeof(int) * (L->MaxSize));
		int j = 0;
		for (j = 0;j < L->len;j++)
		{
			L->data[j] = p[j];//p[j]==*(p+j)  ----指针与数组表示方式的关系或者说数组的本质
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

//顺序表的删除操作
//动态与静态相同
int ListDelete(SqList* L, int i, int* e)//删除顺序表的第i个元素，并返回其结果
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


//顺序表的按值查找
//在表中查找第一个元素值是e的元素，并返回其位序
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
	SqList L;//创建一个静态分配的顺序表
	return 0;
}