#include <stdio.h>

/**
 * main - a program that prints the numbers of base 16 in lower case
 *
 * Return: Base 16 number 
 */

int main(void)
{
	int i;
	i =0;
	for (i = 0; i < 16; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
