#include <stdlib.h>
#include "main.h"

/**
 * word_count - function to count the number of words in a string
 * @s: the string to evaluate
 *
 * Return: the number of words
 */
int word_count(char *s)
{
	int flg, a, i;

	flg = 0;
	i = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			i++;
		}
	}

	return (i);
}

/**
 * **strtow - function that splits a string into words
 * @str: the string to string to split
 *
 * Return: a pointer to an array of strings (Success)
 * and NULL (Error)
 */
char **strtow(char *str)
{
	char **mantrix, *temp;
	int i, j = 0, len = 0, wrds, c = 0, start, end;

	while (*(str + len))
		len++;
	wrds = word_count(str);
	if (wrds == 0)
		return (NULL);

	mantrix = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (mantrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
			end = i;
			temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mantrix[j] = temp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mantrix[j] = NULL;

	return (mantrix);
}
