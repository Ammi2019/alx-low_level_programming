#include <stdio.h>
#include "main.h"
/*
 * _put_recursion - a function to print a string followed by a new line
 * @s - print this string
 * Return void
 */

void _put_recursion(char *s)
{
	if (*s =='\0')
	{
	_putchar("%c\n");
	return;
	}
		_putchar(s +1);
		_puts_recursion(s);
}
