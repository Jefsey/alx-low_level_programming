#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the row of the row
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; j++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
			}
			_putchar('\n');
		}
	}
}
