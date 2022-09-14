#include "main.h"

/**
 * main - print last digit of a number
 *
 * Return: Last digit
 */
int print_last_digit(int)
{
	int i;

	if (i < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
