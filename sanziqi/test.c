#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
//һ�����Ա���
//������������ѭ�����ַ��������顢�������ṹ�塤����������
//C�����ص㣺ָ�롢�ڴ����
//C++Ҫѧ������������ԡ����͡�ģ�塢STL

void menu()
{
	printf("---------1.PLAY--------\n");
	printf("---------0.EXIT--------\n");
}


game()
{
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board,ROW,COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	

	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		//��ӡ����
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		if (Iswenplayer(board, ROW, COL))
		{
			break;
		}
		//��������
		Computermove(board, ROW, COL);
		//��ӡ����
		Displayboard(board, ROW, COL);
		if (Iswencom(board, ROW, COL))
		{
			break;
		}
	}
}



int main()
{
	printf("������\n");
	
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ\n");
		}
		else
		{
			printf("����������ѡ��\n");
		}
	} while (input);

	return 0;
}