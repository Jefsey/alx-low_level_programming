#include "main.h"

/**
 * puts2 - print sharacter of a string follow by a new line
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
