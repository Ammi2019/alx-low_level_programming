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
	int n = 0;
	int LastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if ((LastDigit != 0) && (LastDigit < 6))
	{
		printf("Last digit of %d is %d and is less than 6 and  not 0\n", n, LastDigit);
	}
	else if (LastDigit == 0)
	{
		printf("Last digit of %d is  %d is and is 0\n", , LastDigit);
}
	else 
	{
		printf("last digit of %d is %d and is greater than 5\n", n, LastDigit);
	}
	return (0);
}
