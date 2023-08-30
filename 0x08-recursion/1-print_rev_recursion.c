#include "main.h"

/**
  * void _print_rev_recursion - function that prints a string in reverse
  * @s: The string to print
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

