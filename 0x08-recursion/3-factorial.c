#include "main.h"

/**
  * factorial - A  function that retiurns the factorial of any given number
  * @n: the number to perform factorial on
  * Return: -1 if n is lower than 0; otherwise return factorial
  */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
