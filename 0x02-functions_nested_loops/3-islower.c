#include "main.h"

/**
 * main - check for lower case character
 *
 * Return: Always 0
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
