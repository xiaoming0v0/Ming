#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 0 ����0
//'0' �ַ�0�� ASCIIֵ��48
//'\0' �ַ��� ASCIIֵ��0


//  \ddd��ddd��ʾ1~3���˽�������
//  \xdd��dd��ʾ3��ʮ����������


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

//�������ֵ





//���������������� ������������֮�󣬰��Ӵ�С�������

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


//��ASCIIֵ������Ӧ���ַ�

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


//��ӡϸ��
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

//ע����Ӣ�ķ���
//scanf�е�˫�����ڱ����ϸ��ո�ʽ���ո����⣬scanf���Զ������ո񣨰���%c������⣩��Ѱ����һ�����֡�
//���Բ�Ҫ�����ӿո����ǻ���Ҫ������һ�����ֲ��ܽ���



//ת���ַ��Ĵ�ӡ

//
//int main()
//{
//	printf("\"Hello world!\"");
//	return 0;
//}


//�����ĸ����֣��ҳ����ֵ��

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





//����n�Ľ׳�

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





//����1��+2��+3��.....+n!

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




//ʹ�ö��ֲ�����һ�����������е�ĳ������n 

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//������n
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
//			printf("�ҵ���,�ڵ�%d��",mid);
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
//		printf("û�ҵ�");
//	}
//	
//	return 0;
//}