#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//指针


//指针是内存中最小单元（字节）的编号，也就是地址



//指针的大小
//32 位     4个字节
//64位      8个字节


//指针类型的意义
//1.决定了解引用时一次能操作多少个字节
   
/*int main()
{
	int a = 0;
	int* pi = &a;
	printf("%d\n", *pi);
	char* pc = (char)&a;
	printf("%d", *pc);
	return 0;
}
*/
//2.决定了指针的步长   :  指针+1表示加上所指类型的（字节）大小


//野指针
//原因：1，未初始化
//          2，数组越界访问
//          3，避免返回局部变量的地址（函数在被调用后就会销毁（所在内存空间未被使用时仍存在））




//指针的运算

//指针+-整数
//指针-指针  : 两个地址之间的元素个数

//法一
/*int my_strlen(char* pc)  //(字符串可以看作数组，传参时传的是首地址)
{
	int count = 0;
	while (*pc != '\n')
	{
		count++;
		pc++;
	}
	return count;
}
*/
//法二 递归

//法三  指针-指针
/*int my_strlen(char* pc)
{
	char* start = pc;
	while (*pc != '\0')
	{
		pc++;
	}
	return pc - start;
}

int main()
{
	int len = my_strlen("abdefdf");
	printf("%d", len);
	return 0;
}
*/