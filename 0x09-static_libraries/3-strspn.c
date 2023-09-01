#include "main.h"
/**
 * _strspn - function Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nm = 0;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
	nm++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (nm);
	}
	s++;
	}
	return (nm);
}
