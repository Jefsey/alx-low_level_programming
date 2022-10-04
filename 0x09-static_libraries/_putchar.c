#include <unistd.h>

/**
 * _putchar - write character c to standard output
 * @c: the input character
 *
 * Return: on success 1
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
