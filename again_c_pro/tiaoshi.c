#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����
/*int main()
{
	int i = 0;
	int arr[3] = { 0 };
	for (i = 0;i < 3;i++)
	{
		scanf("%d", &i);
	}
	//ע���������˼��ѭ��

	for (i = 0;i <= 9;i++)
	{
		printf("%d ", i);
	}
	return 0;
}
*/



//ջ����ʹ�øߵ�ַ�Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ�



//ʵ��1!+2!+3!+...n!
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


//ģ��ʵ��strcpy
//strcpy�ڸ����ַ���ʱ���\0Ҳ���ƹ�ȥ


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




//����ָ���ָ�볣��


int main()
{
	int num1 = 0;
	int num2 = 0;
	//����ָ��----const���ε���*p,������ָ����ָ��ı���������
	const int* p1 = &num1;
	num1 = 2;
	//p1 = &num2;
	//int** x = (int**)&p1;
	//**x = 3;
	printf("%d", num1);
	//ָ�볣��----const���ε���p,������ָ�����
	int* const p2 = &num1;
	*p2 = 3;

	return 0;
}