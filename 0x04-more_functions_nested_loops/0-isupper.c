#include "main.h"
#include <ctype.h>
/**
* _isupper - chccks upper case
* Return: 1 if uppercase and 0 if lower
*/

int _isupper(int c)

{

	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
