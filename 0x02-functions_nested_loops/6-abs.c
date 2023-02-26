#include "main.h" 
/**
* int_abs - compute an absolute value of an integer
* Return: void
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
