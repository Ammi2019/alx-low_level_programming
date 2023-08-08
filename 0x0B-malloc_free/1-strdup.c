#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: char value
 * Return: 0
 */

char *_strdup(char *str)
{
	char *par;
	int i, a = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	par = malloc(sizeof(char) * (i + 1));

	if (par == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		par[a] = str[a];

	return (par);
}

