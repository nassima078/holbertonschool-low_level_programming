#include "main.h"

/**
 * print_chessboard- Write a function that prints the chessboard.
 * @a: the board to print
 *
 * Return: (0)
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8 )
		{ 
			_putchar(a[i][j]);
			j++;
	        }
		_putchar('\n');
		i++;
	}
}

