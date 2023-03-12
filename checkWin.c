#include "main.h"
#include <stdio.h>

/**
 * check_win - Entry point
 * Description: It confirms if a player as won
 * @sym: Character
 * Return: char
 */

void check_win(char sym)
{
	char board[3][3]; /* Default tic-tac-toe board*/
	int i, j;

	for (i = 0; i < 3; i++)
	{
		if (board[i][0] == sym && board[i][1] == sym && board[i][2] == sym)
		{
			return (1);
			/* Checks the rows */
		}
	}
	for (j = 0; j < 3; j++)
	{
		if (board[0][j] == sym && board[1][j] == sym && board[2][j] == sym)
		{
			return (1);
			/* Check the columns */
		}
	}
	if (board[0][0] == sym && board[1][1] == sym && board[2][2] == sym)
	{
		return (1);
		/* Checks downward right diagonal */
	}
	if (board[0][2] == sym && voard[1][1] == sym && board[2][0] == sym)
	{
		return (1);
		/* Checks downward left diagonal */
	}
	return (0);
}
