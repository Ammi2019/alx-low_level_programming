#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print number in base 16
 * Return: Always 0 (success)
 */

int main(void)

{
	int r;
	char low;

	for (r = '0'; r <= '9'; r++)
	putchar(r);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
