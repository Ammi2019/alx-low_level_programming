#include <stdlib.h>
#include "main.h"

/**
 * *_memset - funtion that fills memory with a constant byte
 * @s: memory area to fill
 * @b: char to copy
 * @n: number of times to copy
 *
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of memberss in the array
 * @size: size of each member
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nelement, unsigned int size)
{
	char *ptr;

	if (nelement == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nelement);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nelement * size);

	return (ptr);
}
