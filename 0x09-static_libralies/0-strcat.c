#include "main.h"

/**
  *_strcat - Function that concatanates two strings
  *@src: value to input
  *@dest: value to input
  *
  *Return: void
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

	dest[b] = '\0';
	return (dest);
}
