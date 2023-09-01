#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - function that prints the minimum number of coins
  * and makes change for an amount of money
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: 0 (Success), 1 (Error)
  */
int main(int argc, char *argv[])
{
	int nm, a, reslt;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nm = atoi(argv[1]);
	reslt = 0;

	if (nm < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && nm >= 0; a++)
	{
		while (nm >= coins[a])
	{
		reslt++;
		nm -= coins[a];
	}
	}
	printf("%d\n", reslt);
	return (0);
}
