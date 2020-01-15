#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("*****   1.play  *****\n");
	printf("*****   0.exit  *****\n");
	printf("*********************\n");
}
void game()
{
	//printf("����Ϸ\n");
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//��ʼ������
	Initboard(board, ROW, COL);//' '
	//��ӡ����
	Displayboard(board, ROW, COL);
	while (1)
	{ 
	//�����
		PlayMove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	//������
		ComputerMove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}