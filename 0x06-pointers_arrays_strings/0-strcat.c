#include <stdio.h>
#include "main.h"

/**
 * *_strcat- concatenate two strings.
 * @dest: Use a terminator to add and not overite
 * @src: Append result ot the dest terminating at zero
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);

}
