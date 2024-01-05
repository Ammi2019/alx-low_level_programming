#include <stdio.h>
#include "main.h"
/**
  * reverse_array - a function to reverse array of integers
  * @a: array
  * @n: number of elements of array
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int k;
	int b;

	for (k = 0; k < n--; k++)
	{
		b = a[k];
		a[k] = a[n];
		a[n] = b;
	}
}
