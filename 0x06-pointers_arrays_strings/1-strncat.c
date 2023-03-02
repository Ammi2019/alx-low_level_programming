#include <stdio.h>
#include "main.h"

/**
 * *_strncat-concatenate two strings.
 * @dest: At termination 0 add the src string
 * @src: Append to dest
 * @n: number od bytes to use
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len =0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
