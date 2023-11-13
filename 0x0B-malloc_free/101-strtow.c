#include <stdlib.h>
#include "main.h"

/**
 * word_count - function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int word_count(char *s)
{
	int flg, d, b;

	flg = 0;
	b = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
		b++;
		}
	}

	return (b);
}
/**
 * **strtow - function thatsplits a string into words
 * @str: string to split
 *
 * Return: pointer to
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int i, r = 0, ln = 0, wrds, c = 0, strt, end;

	while (*(str + ln))
		ln++;
	wrds = word_count(str);
	if (wrds == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= ln; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (strt < end)
					*tmp++ = str[strt++];
				*tmp = '\0';
				mat[r] = tmp - c;
				r++;
				c = 0;
			}
		}
		else if (c++ == 0)
			strt = i;
	}

	mat[r] = NULL;

	return (mat);
}
