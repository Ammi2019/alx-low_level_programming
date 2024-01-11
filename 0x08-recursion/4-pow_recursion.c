#include <stdio.h>
#include "main.h"

/**
  *  _pow_recursion - a function that prints tha value of x
  * raised to the the power of y
  * @x: the base value
  * @y: power value
  * Return: x to the power of y
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return(x * _pow_recursion(x, y - 1));
}
