#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a funtion that returns the number of elements in a linked list
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
	j++;
	h = h->next;
	}
	return (j);
}
