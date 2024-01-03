#include "main.h"
/**
  * print_rev - a function that prints a string,
  * in reverse, followed by a new line
  * @s: string
  * return: 0
  */
void print_rev(char *s)
{
	int str = 0;
	int rev_str;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	s--;

	for (rev_str = str; rev_str > 0; rev_str--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
