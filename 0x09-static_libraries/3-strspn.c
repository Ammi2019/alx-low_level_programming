#include "main.h"
/**
 * _strspn -function entry point
 * @s: input variable
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
      	unsigned int i = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
 	{
		if (*s == accept[r])
		{
			i++;
			break;
		}
		else if (accept[r + 1] == '\0')
		return (i);
	}
	s++;
	}
	return (i);
}
