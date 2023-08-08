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
	int i, a;

	i = 0;
	a = 0;

	if (str == NULL)
	{
	while (str[i] != '\0')
		{
		i++;
		}
		return (0);
		
	}

	par  = malloc(sizeof(char) * (i + 1));
	if (par == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		par[a] = str[a];
	}
	return (par);
}
