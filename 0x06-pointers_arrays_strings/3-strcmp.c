#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string ro be compared
 * Return: If str1 < str2. the negative diference at
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
