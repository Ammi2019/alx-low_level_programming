#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * _isupper - function that checks for upper case character
 *
 * Return: 1 if upper case and 0 other wise
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		return (1);
	}
	for (c = 'a';c <= 'z'; c++)
	{
		return (0);
	}
        return (0);
}
