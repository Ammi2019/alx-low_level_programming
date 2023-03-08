#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	int b = 0;

	while (*s)
	{
		for (n = 0 && n <= 5; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				n++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
