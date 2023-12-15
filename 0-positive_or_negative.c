#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A  program to assign a random number positive or negative
 * n: the random number
 * Return: is positive if greater than 0, is zero if zero and is  negative
 * if less than 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	/* your code goes there */
	return (0);
}
