#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * Return: Nothing
 */
void print_alphabet(void);
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
