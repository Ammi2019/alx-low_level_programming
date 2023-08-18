#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers, followed by a new line.
  * @*seperator: string to be printed between numbers
  * @n: the number of integers passed to the function
  * @...: variable number of characters to be printed
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned a;
	va_start(nums, n);

	
	for(a = 0; a < n; ++a)
	{
		printf("%d", va_arg(nums, int));


	if(a < (n - 1) && separator != NULL)
	
		printf("%s", separator);
	}

	va_end(nums);

	printf("\n");

}
