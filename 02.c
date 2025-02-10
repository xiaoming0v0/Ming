#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#include <windows.h>
//实现多个字符从两端移动，向中间汇聚

//int main()
//{
//	char arr1[] = "haohaoxuexi taintianxiangshang";
//	int sz = sizeof(arr1) / sizeof(arr1[1])-1;
//	char arr2[] = "haohaoxuexi taintianxiangshang";
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr2[i] = '#';
//	}
//	int left = 0;
//	int right = sz - 1;
//	int j = 0;
//
//	//用while更好一些，不再修改，蓝
//	for (j = 0;j < sz - 1;j++)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//		if (left > right)
//		{
//			break;
//		}
//	}
//
//	return 0;
//}




#include<string.h>
//实现登录，三次内输入密码正确则提示登陆成功，否则显示失败并提示失败

//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码： ");
//		scanf("%s", password);
//		if (strcmp(password, "abcdefg") == 0)
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//	{
//		printf("机会已用完");
//	}
//	return 0;
//}