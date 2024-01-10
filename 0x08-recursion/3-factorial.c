#include <stdio.h>
#include "main.h"

/**
  * factorial - a function that that returns the facgtorial of a given number
  * @n: thw variable
  * Return: -1 if n is less than 0; if 0 return 1
  */

int factorial(int n)
{
	if (n < 0)
		return  (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
