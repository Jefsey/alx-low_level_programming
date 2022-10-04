#include "main.h"

/**
 * _isalpha - check is a character is an alphabet
 *
 * @c: interger type
 * Return: 1 for success, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
