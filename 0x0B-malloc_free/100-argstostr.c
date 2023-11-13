#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main efunction ntry
 * @ac: int input
 * @av: pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, k, a = 0, u = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
			u++;
	}
	u += ac;

	str = malloc(sizeof(char) * u + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (k = 0; av[i][k]; k++)
	{
		str[a] = av[i][k];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}
