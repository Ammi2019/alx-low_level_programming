#include <stdio.h>
#include "main.h"


/**
  * _tsrlen_recursion - a function that print lenth of a string
  * @s: The string
  * Return: String length.
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
