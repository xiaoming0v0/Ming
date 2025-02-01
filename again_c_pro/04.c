#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//操作符




//不创建第三个变量，实现两个变量的交换
//int main()
//{
//	int a = 4;
//	int b = 9;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}



//求一个整数在内存中存储的二进制中1的个数

//int main()
//{
//	int a = 3;
//	int count = 0;
//	int i = 0;
//	for (i = 1;i <= 32;i++)
//	{
//		count += a & 1;
//		a >>=1;
// 
//	}
//	printf("%d", count);
//	return 0;
//}



//输入大写出小写；输入小写出大写
//多组输入
/*int main()
{
	char ch = 0;
	while (scanf("%c",&ch)==1)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c", ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c", ch + 32);
		}
	}
	return 0;
}
*/


//整型提升
//当字符类型和短整型类型表达式运算时，会转换为int型
