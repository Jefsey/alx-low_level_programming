#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to find its length
 *
 * Return: lenght of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
