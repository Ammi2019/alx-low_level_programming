#include "main.h"

/**
 * _mindset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @i: unsigned type
 * @n: bytes
 * Return: pointer to the memory.
 */


char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

	return (s);
}
