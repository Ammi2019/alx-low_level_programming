#include <stdio.h>
#include "main.h"

/**
 * _strncat - a fuction that concatenates two strings 
 * @src: string one that uses n number of bytes
 * @dest: string two
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[a] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
