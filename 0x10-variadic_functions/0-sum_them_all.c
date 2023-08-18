#include <stdarg.h>
#include "variadic_functions.h"


/**
  * sum_them_ all - function that returns the sum of all its parameters.
  * @... - variable parameters to calculate the value of
  * @n: varaible to be printed calculated
  * Return: 0 if n == 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	if (n == 0)
	return (0);

	for(a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return(sum);
}
