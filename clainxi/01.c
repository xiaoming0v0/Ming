#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 0 数字0
//'0' 字符0， ASCII值是48
//'\0' 字符， ASCII值是0


//  \ddd，ddd表示1~3个八进制数字
//  \xdd，dd表示3个十六机制数字


//my_print(char* arr)
//{
//	while(*arr!=0)
//	printf("%c", *arr++);
//
//}
//int main()
//{
//	char arr[] = { 'a','c','z' };
//	printf("%d\n", strlen(arr));
//	printf("%s\n", arr);
//	my_print(arr);
//	return 0;
//}

//答案是随机值





//不创建其他变量， 输入三个数字之后，按从大到小依次输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b,&c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	if (c > a)
//	{
//		printf("%d %d %d", c, a, b);
//	}
//	else if (c > b)
//	{
//		printf("%d %d %d", a, c, b);
//	}
//	else
//	{
//		printf("%d %d %d", a, b,c);
//
//	}
//	
//
//	return 0;
//}


//由ASCII值输出相对应的字符

//int main()
//{
//	int arr[] = { 1,45,56,79,35,100 };
//	int i = 0;
//	for (i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//
//}


//打印细节
//int main()
//{
//	int a = 0;
//	float b = 0.0f;
//	float c = 0.0f;
//	float d = 0.0f;
//	scanf("%d;%f,%f,%f", &a, &b, &c, &d); 
//	printf("%d;%f,%f,%f", a, b, c, d);
//	return 0;
//
//}

//注意中英文符号
//scanf中的双引号内必须严格按照格式，空格例外，scanf会自动跳过空格（按照%c输入除外），寻找下一个数字。
//所以不要在最后加空格，这是还需要再输入一个数字才能结束



//转义字符的打印

//
//int main()
//{
//	printf("\"Hello world!\"");
//	return 0;
//}


//输入四个数字，找出最大值】

//int main()
//{
//	
//	int a=0; 
//	int i = 0;
//	int max = 0;
//	scanf("%d", &max);
//	max = a;
//	for (i = 1;i < 4;i++)
//	{
//		scanf("%d", &a);
//		if (max < a)
//			max = a;
//
//	}
//	printf("%d",max);
//	return 0;
//}





//计算n的阶乘

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 1;
//	for (i = 1;i <= n;i++)
//	{
//		m *= i;
//	}
//	printf("%d", m);
//	return 0;
//}





//计算1！+2！+3！.....+n!

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int m = 1;
//	int i = 0;
//	
//	for (i = 1;i <= n;i++)
//	{
//		m *= i;
//		sum += m;
//	}
//	printf("%d", sum);
//
//	return 0;
//}




//使用二分查找找一个有序数组中的某个数字n 

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找数字n
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = sz;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n == arr[mid])
//		{
//			printf("找到啦,在第%d个",mid);
//			break;
//		}
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//	
//	return 0;
//}