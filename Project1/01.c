#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//顺序表
//随机访问，查找时间复杂度为o(1)

#define InitSize 10
//声明结构体
typedef struct
{
	int data[InitSize];//静态数组存放元素
	int len;//顺序表当前长度
}Static_Sqlist;//顺序表类型定义

typedef struct
{
	int* data;//指向动态数组的指针，数组首地址
	int  MaxSize;//定义顺序表最大长度
	int len;//顺序表当前长度
}Dynamic_Sqlist;
void Static_InitList(Static_Sqlist* L)//静态初始化
{
	L->len = 0;
}

void Dynamic_InitList(Dynamic_Sqlist* L)//动态数组初始化
{
	L->data = (int*)malloc(sizeof(int) * InitSize);
	L->MaxSize =InitSize;
	L->len = 0;
}


int ListInsert(Static_Sqlist* L, int i,int e)//在顺序表的第i个位置插入元素，时间复杂度为o(n
{
	if (L->len >= InitSize)//已经存满，无法插入
	{
		return 0;
	}
	if (i<1 || i>L->len+1)//判断i的位置是否有效
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
int ListDelete(Static_Sqlist* L, int i, int* e)//在顺序表的第i个位置删除元素， 时间复杂度为o(n)
{
	if (i<1 || i>L->len)//判断i的位置是否有效
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
IncreaseSize(Dynamic_Sqlist* L,int x)//增加动态数组长度
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

int GetElem1(Dynamic_Sqlist* L, int i)//按位查找
{
	return L-> data[i - 1];
}


int GetElem2(Dynamic_Sqlist* L, int e)//按值查找,  时间复杂度o（n）
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
	
	Static_Sqlist L1;//创建一个顺序表
	Static_InitList(&L1);//静态分配初始化顺序表

	Dynamic_Sqlist L2;//创建顺序表
	Dynamic_InitList(&L2);//动态分配初始化顺序表
	
	//省略操作---向顺序表中添加元素

	if (ListInsert(&L1, 3, 3))		//像数组中插入一个元素
	{
		printf("插入成功");
	}
	else
	{
		printf("插入失败");
	}

	int e = -1;
	if (ListDelete(&L1, 3, &e))		//在数组中删除一个元素,并说明是什么
	{
		printf("删除成功");
	}
	else
	{
		printf("删除失败");
	}

	IncreaseSize(&L2, 5);//增加动态数组的长度

	int i = 0;
	int a = GetElem1(&L2, i);//按位查找元素

	int e = 0;
	scanf("%d", &e);
	if (GetElem2(&L2, e))		//按值查找元素
	{
		printf("找到啦，是第%d个", GetElem2(&L2, e));
	}
	else
	{
		printf("未找到");
	}
	
	return 0;
}
