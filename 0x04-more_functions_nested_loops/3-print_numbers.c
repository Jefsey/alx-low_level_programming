#include "main.h"

/**
 * print_numbers - print 1 to 9 with new line
 *
 * Return: void or nothing
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
