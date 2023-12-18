#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that assigns a random number to a variable
 * n: the variable
 * Return: and is greater than 5 if last digit is greater than 5
 * and is 0 if if last digit is 0
 * and is less than 6 and 0, if the last digit is less than 6 and not 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 5);
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of n is  %d and is less than 6 and not 0\n", n);
}
	else 
	{
		printf("last digit of n is %d and is 05\n", n,);
	}
	return (0);
}
