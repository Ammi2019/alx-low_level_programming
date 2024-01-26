#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - a function that returns the sum of all its paramters* @n: number of paramters.
* @...: Variable number of paramters passed to calculate the sum of.
* Return: If n == 0 - 0., otherwise - the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int j, sum = 0;

	va_start(all, n);
	for (j = 0; j < n; j++)
	sum += va_arg(all, int);
	
	va_end(all);
	return (sum);
}
