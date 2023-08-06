#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: The character being checked
 * to determine wether lower or upper case
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
