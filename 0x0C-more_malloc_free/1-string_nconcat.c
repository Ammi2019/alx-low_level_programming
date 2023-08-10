#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings
  * @s1: string value
  * @s2: string value
  * @n: malloc allocation size
  * Return: NULL if function fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;

	unsigned int a = 0, b = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
	{
		ln1++;
	}
		while (s2 && s2[ln2])
		{
			ln2++;
		}
	if (n < ln2)
	{
		c = malloc(sizeof(char) * (ln1 + n + 1));
	}
	else
	{
		c = malloc(sizeof(char) * (ln1 + ln2 + 1));
	}
		if (!c)
		{
			return (NULL);
		}
			while (a < ln1)
			{
				c[a] = s1[a];
					a++;
			}
	while (n < ln2 && a < (ln1 + n))
	{
			c[a++] = s2[b++];
	}
	while (n >= ln2 && a < (ln1 + ln2))
	{
			c[a++] = s2[b++];
	}	


	c[a] = '\0';

	return (c);
}
