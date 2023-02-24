#include "main.h"
/**
* _isupper(int c) funtion that checks for upper case character
* Return: 1 (c is upper case)
* Return: 0 (c is otherwise)
*/

int _isupper(int c)

{
	if (c <= 65 && c <= 98)
	{
	return (1);
	}
	return (0);
}
