#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @i: the interger to be printed from
 * Return: Last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
