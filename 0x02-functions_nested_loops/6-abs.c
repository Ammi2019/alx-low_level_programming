#include "main.h"


/**
* _abs - compute an absolute value of an integer
* Return: c if less than 0 &&abs_val if absolute
* c: of an in value
*/

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;

	return (abs_val);
	}
	return (c);
}
