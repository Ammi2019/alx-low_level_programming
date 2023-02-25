#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -print lower case exclude selected letters
 * Return: Always 0 (success)
 */

int main(void)

{
	char low_alph, e, q;

	e = 'e';
	q = 'q';

	for (low_alph = 'a'; low_alph <= 'z'; low_alph++)
	{
	if (low_alph != e && low_alph != q)
	putchar(low_alph);
	}
	putchar('\n');
	return (0);
}
