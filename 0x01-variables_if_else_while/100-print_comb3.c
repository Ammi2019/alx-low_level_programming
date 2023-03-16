#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main -print posible combinatons of two digit numbers
 *Return: 0 Always
 */

int main(void)

{
	int d, p;

	for  (d = '0'; d < '9'; d++)
	{
	for (P = d + 1; p <= '9'; p++)
	{
	if (p != d)
	putchar(d);
	putchar(p);
	if (d == '8' && 0 == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
