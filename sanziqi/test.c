#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
//一、语言本身
//变量、条件、循环、字符串、数组、函数、结构体······
//C语言重点：指针、内存管理
//C++要学：面向对象特性、泛型、模板、STL

void menu()
{
	printf("---------1.PLAY--------\n");
	printf("---------0.EXIT--------\n");
}


game()
{
	//创建棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board,ROW,COL);
	//打印棋盘
	Displayboard(board, ROW, COL);
	

	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		//打印棋盘
		Displayboard(board, ROW, COL);
		//判断输赢
		if (Iswenplayer(board, ROW, COL))
		{
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		//打印棋盘
		Displayboard(board, ROW, COL);
		if (Iswencom(board, ROW, COL))
		{
			break;
		}
	}
}



int main()
{
	printf("三子棋\n");
	
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
			printf("退出游戏\n");
		}
		else
		{
			printf("请重新做出选择\n");
		}
	} while (input);

	return 0;
}