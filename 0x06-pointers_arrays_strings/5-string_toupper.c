#include <stdio.h>
#include "main.h"

/**
  * string_toupper - a function to change all lowercase to uppercase
  * @n: pointer
  *
  * Return: n
  */
char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
	if (n[a] >= 'a' && n[a] <= 'z')
	n[a] = n[a] - 32;
	a++;
	}
	return (n);
}
