#include <stdio.h>

/**
 * draw_board - Entry point
 * Description: Tic-Tic-Toe board
 * @board: Char
 */

void draw_board(char board[3][3])
{
	int i;

	/* Default tic-tac-toe board*/
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
		if (i < 2)
		{
			printf("\n---|---|---\n");
		}
	}
	printf("\n");
}


/**
 * check_win - Entry point
 * Description: It confirms if a player as won
 * @sym: Character
 * Return: char
 */

int check_win(char sym)
{
	int i, j;
	char board[3][3];

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
	if (board[0][2] == sym && board[1][1] == sym && board[2][0] == sym)
	{
		return (1);
		/* Checks downward left diagonal */
	}
	return (0);
}

/**
 * main - Entry point
 * Description: Tic-Tic-Toe Game
 * Return: void
 */

int main(void)
{
	int i, j, row, col, count;
	char person1, person2, current_person;
	char board[3][3] = {{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};

	person1 = 'X';
	person2 = '0';

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}

	count = 0;
	current_person = person1;
	while (1)
	{
		printf("Player %c's turn\n", current_person);
		printf("Enter row (1 - 3): ");
		scanf("%d", &row);
		printf("Enter column (1-3): ");
		scanf("%d", &col);
		row--;
		col--;
		draw_board(board);

		if (row < 0 || row > 2 || col < 0 || col > 2)
		{
			printf("Invalid input\n");
			break;
		}
		if (board[row][col] != ' ')
		{
			printf("That space is not empty, pls play again\n");
			continue;
		}

		board[row][col] = current_person;
		draw_board(board);
		if (check_win(current_person))
		{
			printf("Player %c wins!\n", current_person);
			break;
		}

		count++;
		if (count == 9)
		{
			printf("It is a tie!\n");
			break;
		}
		current_person = (current_person == person1) ? person2 : person1;
	}
	return (0);
}
