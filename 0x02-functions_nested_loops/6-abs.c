#include "main.h"

/**
 * _abs - compute absolute value of an interger
 *
 * @i: The interger to be converted
 * Return: int on success
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
