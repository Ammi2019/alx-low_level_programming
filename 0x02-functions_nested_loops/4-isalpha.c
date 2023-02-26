#include "main.h"
/**
 * _isalpha - check for alphabet
 *Return: 1 if character is alpabet otherwise, return  0
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 95 && c <= 122))
	{
	return (1);
	}
	return (0);
}
