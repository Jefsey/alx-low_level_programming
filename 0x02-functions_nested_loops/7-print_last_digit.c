#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @r: the interger to be printed from
 * Return: Last digit
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = r * -1;
	_putchar((r % 10) + '0');
	return (r % 10);
}
