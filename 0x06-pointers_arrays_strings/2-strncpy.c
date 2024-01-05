#include <stdio.h>
#include "main.h"

/**
  * _strncpy - a function that copies a string
  * @dest: string
  * @src: string
  * @n: variable
  *
  * Return: copied string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	while (b <= n)
	{
		dest[b] = '\0';
		b++;
	}
	b = 0;
	while (b <= n && src[b] != '\0')
	{
	dest[b] = src[b];
	b++;
	}
	return (dest);

}
