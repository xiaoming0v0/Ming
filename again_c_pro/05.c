#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ָ��


//ָ�����ڴ�����С��Ԫ���ֽڣ��ı�ţ�Ҳ���ǵ�ַ



//ָ��Ĵ�С
//32 λ     4���ֽ�
//64λ      8���ֽ�


//ָ�����͵�����
//1.�����˽�����ʱһ���ܲ������ٸ��ֽ�
   
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
//2.������ָ��Ĳ���   :  ָ��+1��ʾ������ָ���͵ģ��ֽڣ���С


//Ұָ��
//ԭ��1��δ��ʼ��
//          2������Խ�����
//          3�����ⷵ�ؾֲ������ĵ�ַ�������ڱ����ú�ͻ����٣������ڴ�ռ�δ��ʹ��ʱ�Դ��ڣ���




//ָ�������

//ָ��+-����
//ָ��-ָ��  : ������ַ֮���Ԫ�ظ���

//��һ
/*int my_strlen(char* pc)  //(�ַ������Կ������飬����ʱ�������׵�ַ)
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
//���� �ݹ�

//����  ָ��-ָ��
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