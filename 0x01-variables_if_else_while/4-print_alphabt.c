#include <stdio.h>

/**
 *main - program to print the alphabet in lower case exept q and e
 *
 *Return: lower case
 */

int main(void)
{
	char c;
	c = 'a';

	for (((c = 'a'); (c <= 'z');) && ((c != q); || (c != e);) c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
