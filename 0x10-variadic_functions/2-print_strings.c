#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a funtion that prints strings, followed by a new line.
 * @separator: String to be printed,
 * @n: Number of strings passed.
 * @...:  Variable number of strings.
 * Description: If separator is NULL, Do not print.
 *   If one of the strings if NULL, print nil.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list format;
	char *str;
	unsigned int i;


	va_start(format, n);
	for (i = 0; i < n; i++)
	{
	str = va_arg(format, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(format);
}
