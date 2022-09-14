#include <stdio.h>

/**
 * main - compute and print the sum of all the multiples of 3 and 5 that are below 1024
 * Return: Nothing
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	printf("%d\n", j);
	return (0);
}
