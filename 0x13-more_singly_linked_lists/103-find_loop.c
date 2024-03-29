#include "lists.h"

/**
 * find_listint_loop - a function that  finds the loop in a linked list
 * @head: linked list t
 *
 * Return: address to the first node of a loop, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw = head;
	listint_t *fst = head;

	if (!head)
		return (NULL);

	while (slw && fst && fst->next)
	{
	f = f->next->next;
	slw = slw->next;
	if (fst == slw)
	{
	slw = head;
	while (slw != fst)
	{
	slw = slw->next;
	fst = fst->next;
	}
	return (fst);
	}
	}
	return (NULL);
}
