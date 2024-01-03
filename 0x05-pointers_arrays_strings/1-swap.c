#include <stdio.h>
#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 * @a: the value
 * @b: the second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
