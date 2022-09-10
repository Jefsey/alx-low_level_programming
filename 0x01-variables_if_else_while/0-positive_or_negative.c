#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * more headers goes there
 * This program will assign a random number to the variable n each time it is executed.
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}
