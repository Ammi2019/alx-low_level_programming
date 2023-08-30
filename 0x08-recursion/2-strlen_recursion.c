#include "main.h"

/**
  * int _strlen_recursion - function that returns the length of a string
  * @s: the string
  * Return: length of the string
  */


int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
	len++;
	len += _strlen_recursion(s + 1);
	}
	return (len);
}
