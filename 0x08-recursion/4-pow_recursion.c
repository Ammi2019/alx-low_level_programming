#include "main.h"
/**
  * _pow_recursion - a function that returns the a number raised to power
  * @x: the base number
  * @y: the power of a number
  * Return: if y is lower than 0 = -1
  */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	return (-1);
		if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
