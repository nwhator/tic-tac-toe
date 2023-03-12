#include "main.h"
#include <stdio.h>

/**
 * draw_board - Entry point
 * Description: Tic-Tic-Toe board
 * Return: void
 */

void draw_board(void)
{
	char board[3][3]; /* Default tic-tac-toe board*/

	printf("\n");
	printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
	printf("\n");
}
