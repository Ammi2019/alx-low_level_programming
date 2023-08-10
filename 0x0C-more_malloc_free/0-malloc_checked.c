#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: the variable holding the number of bytes to allocate
  * Return: Normal status value of 98 when code fails
  */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt != NULL)
	{
		return (pt);
	}
	else
	{
		exit(98);
	}
}
