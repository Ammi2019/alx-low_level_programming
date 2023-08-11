#include "main.h"
#include <stdlib.h>


/**
  * _realloc - unction that reallocates a memory block using malloc and free
  * @ptr: pointer to the memory previously allocated with a call to malloc
  * @old_size:  size, in bytes, of the allocated space for ptr
  * @new_size: is the new size, in bytes of the new memory block
  * Return: NULL
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1;
	char *ptr_old;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}

		if (new_size == 0 && ptr)
		{
			free(ptr);
			return (NULL);
		}

		if (!ptr)
		{
			return (malloc(new_size));
		}

		pt1 = malloc(new_size);
		if (!pt1)
		{
			return (NULL);
		}

		ptr_old = ptr;
		if (new_size < old_size)
		{
			for (a = 0; a < old_size; a++)

			pt1[a] = ptr_old[a];
		}
		free(ptr);

		return (pt1);
}
