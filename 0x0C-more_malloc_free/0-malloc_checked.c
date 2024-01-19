#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - a function that allocates memory using malloc
  * @b: Value
  * return: poiter tothe allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
	free (ptr);
}
