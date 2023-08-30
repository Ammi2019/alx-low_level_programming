#include "main.h"

/**
  * factorial - function that returns the factorial of a given number.
  * @n: the variable for factorial
  * Return: -1 error if n is lower than 0 and 1 if 0
  */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}

	if (n == 0)
	{
	return (1);
	}

	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	return (0);
}
