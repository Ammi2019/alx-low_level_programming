#include <stdio.h>

/**
 * _strlen - Returns the length of a string..
 * @str: The string to get the length of
 * return: the length of @str.
 */
size_t _strlen(const char *str)
/* _strlen - Returns the length of a string*/
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
