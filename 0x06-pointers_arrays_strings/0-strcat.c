#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: var string one
 * @dest: var sstring two
 *
 * Return: pointer to there resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
