#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - a function to a print name using pointer to function
* @name: string
* @f: pointer  var
* Return: void
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
