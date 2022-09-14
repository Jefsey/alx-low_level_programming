#include "main.h"

/**
 * times_table - function to print 9 times table
 *
 * Return: Nothing
 *
 */
void times_table(void)
{
	int i, j, fin;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 9; i++)
		{
			fin = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (fin >= 10)
			{
				_putchar((fin / 10) + '0');
				_putchar((fin % 10) + '0');
			}
			else if (fin < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((fin % 10) + '0');
			}
			else
			{
				_putchar((fin % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
