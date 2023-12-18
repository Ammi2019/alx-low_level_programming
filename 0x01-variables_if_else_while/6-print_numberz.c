#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: single digit numbers in base 10
 */

int main(void)
{
	int num;
	num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
