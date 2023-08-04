#include "main.h"

/**
  * _sqrt_recursion - a functioon that calculates the
  * natural square of a number
  *
  * @n: number for which the nantural sqaure is to be calculated for
  * Return: -1 if n does not have a natural sqaure
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_actual_root_recursion(n, 0));
}

/**
  *_actual_root_recursion - finds the natural sqaure root of a number
  * @n: number for which the natural sqaure root is to be calculated
  * @r: the iterator
  * Return: The natural square root
*/

int _actual_root_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_actual_root_recursion(n, r + 1));
}
