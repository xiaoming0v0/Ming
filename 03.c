#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������С��Ϸ



//void game()
//{
//
//	//���������
//	int set = rand()%100;
//	
//	int guess = 0;
//	printf("���������֣�");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > set)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < set)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶�����\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	//��������ĵ�һ���������,����ʼ֮��ֻ�����һ�μ���
//	srand((unsigned int)time(NULL));
//	printf("--------------������С��Ϸ------------\n");
//	int input = 0;
//	do
//	{
//		printf("---------------1.PLAY-----------------\n");
//		printf("---------------0.EXIT-----------------\n");
//		
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("����������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}





//�ػ�С����

//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���60���ڹػ�����ȡ���ػ���������������\n");
//	char arr[20] = {0};
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}



//ʵ���������ִ�С��������  

//����1��if���

//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int temp = 0;
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&c, &b);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//����2��ð��

//int main()
//{
//	int arr[3] = { 0 };
//	int k = 0;
//	for (k = 0;k < 3;k++)
//	{
//		scanf("%d", &arr[k]);
//	}
//	int i = 0;
//	int j = 0;
//	for (j = 3;j > 1;j--)
//	{
//		for (i = 0;i < j - 1;i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	int p = 0;
//	for (p = 0;p < 3;p++)
//	{
//		printf("%d", arr[p]);
//	}
//	
//	return 0;
//}






//�������������Լ��


//��һ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	int i = 0;
//	for (i =a ;i >0;i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("���Լ����%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//����  շת�����

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ����%d", b);
//	return 0;
//}








//��ӡ1+1/1-1/2+1/3-1/4+����������-1/100

//int main()
//{
//	double sum = 0;
//	int i = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}