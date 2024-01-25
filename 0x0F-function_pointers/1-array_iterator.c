#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - a function that prints each array element on a
* newline.
* @array: array
* @size: Number of element to print
* @action: pointer in regular or hex
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
