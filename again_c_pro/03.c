#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����



//��100-200֮�������

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



//������
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
//		printf("%d��������", year);
//	}
//	return 0;
//}




//c���Դ�ӡ�ַ�������ʱ����ֱ�Ӵ�ӡ
//        ��ӡ��������ʱѭ������
//        �����������ǵ�ַ,������Ϊ��ֱַ�Ӵ�ӡ. �������������⣺
//                                                                                           1.sizeof(arr),arr��ʾ��������
//                                                                                           2.&arr ,arr��ʾ�������顣�����ǵ�ַ
//                                                                                              &arr��ʾ����������׵�ַ
//                                                                                              &arr+1��ʾ����������Ĵ�С
//        �������Ӻ�����������ʱ���˻���ָ���������int arr[]  =  int * arr
//        ��sizeof���������鳤��ʱ��ǰ�᲻���Ӻ����У�arr���Ա�ʾ��������
//        �������ڴ�����������ŵģ������׵�ַ�Ϳ�������������ȥ
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
	//����ԭ���Ǿ�̬����n�ں���������ʱ����Ҫ�ڱ���ʱ֪����ʼ��ֵ��
	//�����ݸ�������numֵֻ��������ʱ��ȷ������ˣ�����ֱ����num����ʼ����̬����n��
 
//}
//int main()
//{
//	int num = 0;
//	ADD(num);
//	printf("%d\n", num);
//	return 0;
//}





//��������ʽ���ʺ�Ƕ�׵���
//��ʽ���ʣ������ķ���ֵ��Ϊ����
//Ƕ�׵��ã����ã����ã����ã���



//Ƕ���ǵ��ñ�ĺ���
//�ݹ��ǵ����Լ�
//�ݹ��Ҫ���� �� 1.��������
//                        2.Խ��Խ�ӽ���������




//������̨��
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

//99�˷���
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



//ɾ��һ��������ָ�������֣����ı�ԭ��������
/*int main()
{
	int arr[50] = { 0 };
	//�������鳤��
	int a = 0;
	scanf("%d\n", &a);
	//������������
	int i = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d ",&arr[i]);
	}
	printf("\n");
	//����ɾ�����ֵ�λ��
	int n = 0;
	scanf("%d", &n);
	//ɾ��
	int j = 0;
	for (j = n-1;j < a - 1;j++)
	{
		arr[j] = arr[j + 1];
	}
	//��ӡɾ���������
	int m = 0;
	for (m = 0;m < a - 1;m++)
	{
		printf("%d ", arr[m]);
	}

	return 0;
}
*/




//��һ�������е�ָ��λ�����һ�����ֲ��ı�ԭ����λ��
/*int main()
{
	int arr[50] = { 0 };
	//�������鳤��
	int a = 0;
	scanf("%d\n", &a);
	//������������
	int i = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d ", &arr[i]);
	}
	printf("\n");
	//�����������ֵ�λ�ú�����
	int n = 0;
	int z = 0;
	scanf("%d %d", &n,&z);

	//��������
	//����һ
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

	//������
	int h= 0;
	for (h = a;h >= n;h--)
	{
		arr[h] = arr[h - 1];
	}
	arr[n - 1] = z;



	//���
	int k = 0;
	for (k = 0;k <= a;k++)
	{
		printf("%d ", arr[k]);
	}

	return 0;
}

*/

//ɾ��������ָ������
/*int main()
{
	int arr[50] = { 0 };
	//�������鳤��
	int a = 0;
	scanf("%d\n", &a);
	//������������
	int i = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d ", &arr[i]);
	}
	printf("\n");
	//����ɾ��������
	int del = 0;
	scanf("%d", del);
	//ɾ��
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

//д��һ�������������������Сֵ�Ĳ�


//����һ
/*int main()
{
	//��������
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
	//��������
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


