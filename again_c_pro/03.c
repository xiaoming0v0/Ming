#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数



//找100-200之间的素数

//int Is_su(int n)
//{
//	int i = 0;
//	for (i = 2;i < n; i++)
//	{
//		if (n% i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int j = 0;
//	for (j = 101;j <= 200;j+=2)
//	{
//		if (Is_su(j))
//		{
//			printf("%d ", j);
//		}
//		
//	}
//	return 0;
//}



//找闰年
//int Is_Run(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (Is_Run(year))
//	{
//		printf("%d年是闰年", year);
//	}
//	return 0;
//}




//c语言打印字符串数组时可以直接打印
//        打印整型数组时循环遍历
//        数组名本质是地址,可以作为地址直接打印. 但是有两个例外：
//                                                                                           1.sizeof(arr),arr表示整个数组
//                                                                                           2.&arr ,arr表示整个数组。而不是地址
//                                                                                              &arr表示整个数组的首地址
//                                                                                              &arr+1表示加整个数组的大小
//        数组在子函数中做参数时会退化成指针变量，即int arr[]  =  int * arr
//        用sizeof（）求数组长度时（前提不是子函数中）arr可以表示整个数组
//        数组在内存中是连续存放的，有了首地址就可以连续访问下去
//int main()
//{
//	char arr[5] = {'2','3','f','e'};
//	 
//	printf("%s", arr);
// 
//	return 0;
//}




//ADD(int num)
//{
	 //static int n = num;
	//出错原因是静态变量n在函数中声明时，需要在编译时知道初始化值，
	//而传递给函数的num值只有在运行时才确定。因此，不能直接用num来初始化静态变量n。
 
//}
//int main()
//{
//	int num = 0;
//	ADD(num);
//	printf("%d\n", num);
//	return 0;
//}





//函数的链式访问和嵌套调用
//链式访问：函数的返回值作为参数
//嵌套调用：调用（调用（调用））



//嵌套是调用别的函数
//递归是调用自己
//递归必要条件 ： 1.结束条件
//                        2.越来越接近结束条件




//青蛙跳台阶
//int Tai(n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Tai(n - 1) + Tai(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Tai(n));
//	return 0;
//}

//wxiaoming0107@163.com
//3Wcomwang*

//99乘法表
//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (j = 1;j <= 9;j++)
//	{
//		for (i = 1;i <= j;i++)
//		{
//			printf("%d*%d=%-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//删除一个数组中指定的数字，不改变原来的数字
/*int main()
{
	int arr[50] = { 0 };
	//输入数组长度
	int a = 0;
	scanf("%d\n", &a);
	//输入数组内容
	int i = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d ",&arr[i]);
	}
	printf("\n");
	//输入删除数字的位置
	int n = 0;
	scanf("%d", &n);
	//删除
	int j = 0;
	for (j = n-1;j < a - 1;j++)
	{
		arr[j] = arr[j + 1];
	}
	//打印删除后的数组
	int m = 0;
	for (m = 0;m < a - 1;m++)
	{
		printf("%d ", arr[m]);
	}

	return 0;
}
*/




//在一个数组中的指定位置添加一个数字不改变原来的位置
/*int main()
{
	int arr[50] = { 0 };
	//输入数组长度
	int a = 0;
	scanf("%d\n", &a);
	//输入数组内容
	int i = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d ", &arr[i]);
	}
	printf("\n");
	//输入增加数字的位置和内容
	int n = 0;
	int z = 0;
	scanf("%d %d", &n,&z);

	//增加数字
	//方法一
	int c = arr[n - 1];
	arr[n - 1] = z;

	int j = 0;
	for (j = n;j < a;j++)
	{
		int temp = c;
		c = arr[j];
		arr[j] = temp;
	}
	
	arr[a] = c;

	//方法二
	int h= 0;
	for (h = a;h >= n;h--)
	{
		arr[h] = arr[h - 1];
	}
	arr[n - 1] = z;



	//输出
	int k = 0;
	for (k = 0;k <= a;k++)
	{
		printf("%d ", arr[k]);
	}

	return 0;
}

*/

//删除数组中指定数字
/*int main()
{
	int arr[50] = { 0 };
	//输入数组长度
	int a = 0;
	scanf("%d\n", &a);
	//输入数组内容
	int i = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d ", &arr[i]);
	}
	printf("\n");
	//输入删除的数字
	int del = 0;
	scanf("%d", del);
	//删除
	int h= 0;
	int j = 0;
	for (h = 0;h < a;h++)
	{
		if (arr[h] != del)
		{
			arr[j] = arr[h];
			j++;
		}
	}
	return 0;
}

*/

//写出一段整数序列中最大与最小值的差


//方法一
/*int main()
{
	//输入序列
	int n = 0;
	scanf("%d", &n);
	int arr[50];
	int i = 0;
	int max = 0;
	int min = 100;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	
	printf("%d", max - min);
	
	 
 
	return 0;
}


*/

/*int main()
{
	//输入序列
	int n = 0;
	scanf("%d", &n);
	int arr[50];
	int i = 0;
	
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
		
	}
	int max = arr[0];
	int min = arr[0];
	int j = 0;
	for (j = 1;j < n;j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
		}
		if (min > arr[j])
		{
			min = arr[j];
		}
	}

	printf("%d", max - min);



	return 0;
}
*/


