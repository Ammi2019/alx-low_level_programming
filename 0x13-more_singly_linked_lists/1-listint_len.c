#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked lists
 * @h: linked list of type listint_t
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
	num++;
	h = h->next;
	}
	return (nm);
}
