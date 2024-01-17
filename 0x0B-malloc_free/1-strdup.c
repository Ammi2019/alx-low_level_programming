#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;

	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
	ptr[b] = str[b];
		return (ptr);
}
