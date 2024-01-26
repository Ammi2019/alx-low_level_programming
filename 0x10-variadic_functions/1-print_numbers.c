#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * @...: Variable numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all_num;
	unsigned int i;

	va_start(all_num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(all_num, int));
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(all_num);
}
