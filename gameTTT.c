#include "main.h"
#include <stdio.h>

void draw_board(void);
int check_win(char sym);
/**
 * main - Entry point
 * Description: Tic-Tic-Toe Game
 * Return: 0
 */

int main(void)
{
	int i, j, row, col, count;
	char board[3][3];
	char person1, person2, current_person;

	person1 = 'A';
	person2 = 'B';

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
	draw_board();
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

		if (row < 0 || row > 2 || col < 0 || col > 2)
		{
			printf("Invalid input\n");
			continue;
		}
		if (board[row][col] != ' ')
		{
			printf("That space is not empty, pls play again\n");
			continue;
		}

		board[row][col] = current_person;
		draw_board();
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
