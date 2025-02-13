#include<stdio.h>

#define ROW 3
#define COL 3	
 void Initboard(char board[ROW][COL], int row, int col);

 void Displayboard(char board[ROW][COL], int row, int col);

 void Playermove(char board[ROW][COL], int row, int col);

 void Computermove(char board[ROW][COL], int row, int col);

 int Iswenplayer(char board[ROW][COL], int row, int col);

 int Iswencom(char board[ROW][COL], int row, int col);