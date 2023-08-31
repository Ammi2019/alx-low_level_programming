#include "main.h"

int natural_sqr(int a, int i);

/**
  * _sqrt_recursion - function that returns the natural square root of a number.
  * @n: the variable
  * Return: the square
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(natural_sqr(n, 0));
}
/**
  * natural_sqr - function that recurses to find the natural square
  * root of a number
  * @a: the number to calculate the square root
  * @i: the iterator
  *
  * Return: square root
  */
int natural_sqr(int a, int i)
{
	if (i * i > a)
		return (-1);
	if (i * i == a)
		return (i);
	return (natural_sqr(a, i + 1));
}
