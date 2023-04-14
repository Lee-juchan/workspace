#include <stdio.h>

void print_board();

int main()
{
	char board[3][3] = { {'o'}, {' '}, {' '}};
	print_board(board);
}

void print_board(char board[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		printf(" --- --- ---\n");
		printf("| %c | %c | %c |\n", board[i][1], board[i][2], board[i][3]);
	}
	printf(" --- --- ---\n");
}