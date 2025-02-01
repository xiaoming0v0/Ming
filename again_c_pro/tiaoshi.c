#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//调试
/*int main()
{
	int i = 0;
	int arr[3] = { 0 };
	for (i = 0;i < 3;i++)
	{
		scanf("%d", &i);
	}
	//注意这个有意思的循环

	for (i = 0;i <= 9;i++)
	{
		printf("%d ", i);
	}
	return 0;
}
*/



//栈区先使用高地址的空间，在使用低地址的空间



//实现1!+2!+3!+...n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//
//		sum += ret;
//	}
//	printf("%d", sum);
//}


//模拟实现strcpy
//strcpy在复制字符串时会把\0也复制过去


//char* my_strcpy(char* a, char* b)
//{
// char* p=&a;
//	while (*b)
//	{ 
//		*a = *b;
//		b++;
//		a++;
//	}
//	
//	*a = '\0';
// return p;
 //}
//int main()
//{
//	char a[20] = "xxxxxxxxxxxxxx";
//	char b[] = "abcdef";
//	my_strcpy(a, b);
//	printf("%s", a);
//	return 0;
//}




//常量指针和指针常量


int main()
{
	int num1 = 0;
	int num2 = 0;
	//常量指针----const修饰的是*p,锁的是指针所指向的变量的内容
	const int* p1 = &num1;
	num1 = 2;
	//p1 = &num2;
	//int** x = (int**)&p1;
	//**x = 3;
	printf("%d", num1);
	//指针常量----const修饰的是p,锁的是指针变量
	int* const p2 = &num1;
	*p2 = 3;

	return 0;
}