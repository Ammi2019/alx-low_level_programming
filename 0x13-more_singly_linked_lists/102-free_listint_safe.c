#include "lists.h"

/**
 * free_listint_safe - a fucntion that frees a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ln = 0;
	int diff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
	diff = *h - (*h)->next;
	if (diff > 0)
	{
	tmp = (*h)->next;
	free(*h);
	*h = tmp;
	ln++;
	}
	else
	{
		free(*h);
		*h = NULL;
		ln++;
		break;
	}
	}
	*h = NULL;
	return (ln);
}
