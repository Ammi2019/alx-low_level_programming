#include "main.h"
/*
 * _put_recursion - a function to print a string followed by a new line
 * @s - print this string
 * Return void
 */

void _puts_recursion(char *s)
{
	if (*s =='\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
