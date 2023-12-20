#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 *
 * Return: alphabet in lower case
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
	_putchar('\n');
	return;
}
