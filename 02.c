#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#include <windows.h>
//ʵ�ֶ���ַ��������ƶ������м���

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
//	//��while����һЩ�������޸ģ���
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
//ʵ�ֵ�¼������������������ȷ����ʾ��½�ɹ���������ʾʧ�ܲ���ʾʧ��

//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("���������룺 ");
//		scanf("%s", password);
//		if (strcmp(password, "abcdefg") == 0)
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������");
//	}
//	return 0;
//}