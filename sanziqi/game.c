#define _CRT_SECURE_NO_WARNINGS
#include"game.h"



void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0;j < row;j++)
	{
		for (i = 0;i < col;i++)
		{
			board[j][i] = ' ';
		}
	}

}


void Displayboard(char board[ROW][COL], int row, int col)
{
	int j = 0;
	int i = 0;
	for (j = 0;j < row;j++)
	{
		for (i = 0;i < col;i++)
		{
			printf(" %c ", board[j][i]);
			if (i < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (j < col - 1)
		{
			printf("---|---|---\n");
		}

	}

}





void Playermove(char board[ROW][COL],int row,int col)
{
	
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������\n");
		scanf("%d %d", &x, &y);
		if (0 < x && x < ROW + 1 && 0 < y && y < COL + 1)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
}





void Computermove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}
	}
	
}




int Iswenplayer(char board[ROW][COL], int row, int col)
{
	//����Ӯ
	int j = 0;
	int i = 0;
	int count = 0;
	for (j = 0;j < row;j++)
	{
		count = 0;
		for (i = 0;i < col;i++)
		{
			if (board[j][i] != '*')
			{
				count++;
			}
		}
		if (0 == count)
		{
			printf("��һ�ʤ\n");
			return 1;
		}
	}

	//����Ӯ
	for (j = 0;j < col;j++)
	{
		count = 0;
		for (i = 0;i < row;i++)
		{
			if (board[j][i] != '*')
			{
				count++;
			}
		}
		if (0 == count)
		{
			printf("��һ�ʤ\n");
			return 1;
		}
	}
	
	//б��Ӯ
	//���Խ���
	count = 0;
	for (j = 0,i = 0;j < row && i < col;j++,i++)
	{
		if (board[j][i] != '*')
		{
			count++;
		}
	}
	if (0 == count)
	{
		printf("��һ�ʤ\n");
		return 1;
	}

	//���Խ���
	count = 0;
	for (j = 0, i = col-1;j <row && i >= 0;j++, i--)
	{
		if (board[j][i] != '*')
		{
			count++;
		}
	}
	if (0 == count)
	{
		printf("��һ�ʤ\n");
		return 1;
	}

	return 0;
}







int Iswencom(char board[ROW][COL], int row, int col)
{
	//����Ӯ
	int j = 0;
	int i = 0;
	int count = 0;
	for (j = 0;j < row;j++)
	{
		count = 0;
		for (i = 0;i < col;i++)
		{
			if (board[j][i] != '#')
			{
				count++;
			}
		}
		if (0 == count)
		{
			printf("���Ի�ʤ\n");
			return 1;
		}
	}

	//����Ӯ
	for (j = 0;j < col;j++)
	{
		count = 0;
		for (i = 0;i < row;i++)
		{
			if (board[j][i] != '#')
			{
				count++;
			}
		}
		if (0 == count)
		{
			printf("���Ի�ʤ\n");
			return 1;
		}
	}

	//б��Ӯ
	//���Խ���
	count = 0;
	for (j = 0, i = 0;j < row && i < col;j++, i++)
	{
		if (board[j][i] != '#')
		{
			count++;
		}
	}
	if (0 == count)
	{
		printf("���Ի�ʤ\n");
		return 1;
	}

	//���Խ���
	count = 0;
	for (j = 0, i = col - 1;j < row && i >= 0;j++, i--)
	{
		if (board[j][i] != '#')
		{
			count++;
		}
	}
	if (0 == count)
	{
		printf("���Ի�ʤ\n");
		return 1;
	}

	return 0;
}