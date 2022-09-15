#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Description: Print 1 to 100 and Fizz for multiple of 3
 * Buzz for multiple of 5 and Fizzbuzz for both
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
