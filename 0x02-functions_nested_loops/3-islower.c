#include "main.h"

/**
 * _islower - check for lower case character
 *
 * @c: character to test.
 * Return: 1 if it is a lower case, 0 if not a lower case letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
