#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: single digit numbers
 */

int main(void)
{
	int num;
	num = 0;

	for (num = 0; num <= 9;)
	{
		printf("%d", num);
		num++;
		putchar('\n');
	}
	return (0);

}
