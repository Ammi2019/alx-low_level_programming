#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first input to concatenate
 * @s2: second input to concatenate
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int r, ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = ar = 0;
	while (s1[r] != '\0')
		r++;
	while (s2[ar] != '\0')
		ar++;
	conct = malloc(sizeof(char) * (r + ar + 1));

	if (conct == NULL)
		return (NULL);
	r = ar = 0;
	while (s1[r] != '\0')
	{
		conct[r] = s1[r];
		r++;
	}

	while (s2[ar] != '\0')
	{
		conct[r] = s2[ar];
		r++, ar++;
	}
	conct[r] = '\0';
	return (conct);
}
