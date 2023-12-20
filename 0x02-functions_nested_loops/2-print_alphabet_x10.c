#include <stdio.h>
#include "main.h"

/**
 * main - a function to print the lowercase alphabet 10 times
 *
 * Return: 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char c;

	int n = 0;

	while (n <= 9)
	{
	for(c = 'a'; c <= 'z';)
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
	n++;
	}
	return ;
}
