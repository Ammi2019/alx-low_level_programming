#include <stdio.h>

/**
 * main - program that prints the alphabet in lowrcase, and then in upper case
 * 
 *Return: lower and upper case
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d ='A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
		putchar('\n');
		return (0);
}
