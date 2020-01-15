#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][j], board[i][j], board[i][2]);
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			//printf("---|---|---\n");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
				    printf("|");
			}
		}
		printf("\n");
	}
}
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走");
	while (1)
	{
		printf("请输入要走的坐标(1,3):>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
			printf("坐标非法，请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand()%row;
	    y = rand()%col;
	    if (board[x][y] == ' ')
	    {
	     	board[x][y] = '#';
		    break;
	    }
	}
}
 static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				//没满
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断行是否相等且不为空格
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][0] && board[i][0] != ' ')
		{
		return board[i][0];
		}
		/*while (1)
		{
			int j = 0;
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				j++;
				if (j >= col - 1)
				{
					return board[i][j];
				}
			}
			else
				break;
		}*/
	}
	//列判断
		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] == board[0][i] && board[0][i] != ' ')
			{
				return board[0][i];
			}

			/*while (1)
			{
				j = 0;
				if (board[j][i] == board[j + 1][i] && board[j][i] != ' ')
				{
					j++;
					if (j >= row - 1)
					{
						return board[j][i];
					}
				}
				else
					break;
			}*/
		}
	//斜
	   if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[0][0] && board[1][1] != ' ')
			return board[1][1];
	   if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == board[0][2] && board[1][1] != ' ')
			return board[1][1];

		//判断平局
		if (IsFull(board,row,col) == 1)
		{
			return 'Q';
		}
		return 'C';
}
