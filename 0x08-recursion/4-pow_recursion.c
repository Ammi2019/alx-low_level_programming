#include "main.h"

/**
  * _pow_recursion - function that returns the value
  * of x raised to the power of y
  * @x: value to be to the power of
  * @y: value for the power of x
  * Return: -1 if y is lower than 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	while (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
