#include "main.h"

/**
 * largest_number - return the largest of the numbers
 * @a: first interger
 * @b: second interger
 * @c: third interger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
