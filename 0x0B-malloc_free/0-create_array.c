#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array
 * of size size and assign char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *sr;
	unsigned int a;

	sr = malloc(sizeof(char) * size);
	if (size == 0 || sr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		sr[a] = c;
	return (sr);
}
