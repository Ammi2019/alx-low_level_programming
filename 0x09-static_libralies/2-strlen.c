#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: The string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int longa = 0;


	while (*s != '\0')
	{
		longa++;
		s++;
	}


	return (longa);
}
