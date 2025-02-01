#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//if后面多条语句，一定要加大括号；else也是
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//	{
//		printf("1");
//		printf("2");
//	}
//	else
//		printf("3");
//	printf("4");//注意， 此时printf("4");不在分支语句中，无论age怎样都会被执行
//	return 0;
//}





//int test()
//{
//	int a = 0;
//	scanf("%d\n", &a);
//	if (a == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//	{
//		printf("1\n");
//		printf("2\n");
//	}
//	printf("3\n");
//
//
//	//对比一下
//	printf("%d\n", test());
// 
//	 
//	return 0;
//}



//判断一个数是否为奇数
//void Is_ji (int a)
//{
//	if (a % 2 == 0)
//	{
//		printf("不是奇数");
//	}
//	else
//	{
//		printf("是奇数");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Is_ji(a);
//	return 0;
//}

//输出0-100的所有奇数
 /*int main1()
{
	//变量的作用域
	//在 C 语言中，变量的作用域是由花括号{} 包围的代码块决定的。
	 
	 //1
	for (int i = 1; i <= 100; i+= 2)
	{
		 printf("%d\n", i); 
	}
	printf("%d", i);  //未定义标识符 i 。for循环中的初始化的变量作用域只在for循环中



	//2
	int i = 1;
	for (int i = 1; i <= 100; i += 2)
	{
		printf("%d\n", i);
	}
	printf("%d", i);//输出结果为1. 两次初始化的作用域不同

	//注意，1 2 两种for循环在c99环境下才可以使用，即在for循环（）表达式里面初始化
	//最好不要这么写，因为有些不支持
	//但是c++就是这么写的


	int i;
	for (i = 1; i <= 100; i += 2)
	{
		 printf("%d\n", i); 
	}
	printf("%d", i);//输出结果为101；初始化一次，i的作用域包含for循环
	 

	return 0;
}
 
 */

//switch语句
//switch() 括号中必须包含整型表达式；
//case 后面是整型常量表达式；
//case 是入口，break是出口，default是其他情况



//int main()
//{
//	int day = 0;
//	switch (day)
//	{
//	case 'w':  //字符是整型
//
//	}
//	return 0;
//}

 //++x 和 x++只在赋值时有区别