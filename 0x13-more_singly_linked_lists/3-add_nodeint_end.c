#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of a linked list
 * @head: a pointer to the first element
 * @n: data to insert /new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_insert;
 	istint_t *temp = *head;

	new_insert = malloc(sizeof(listint_t));
	if (!new_insert)
		return (NULL);
	new_insert->n = n;
	new_insert->next = NULL;
	if (*head == NULL)
	{
		*head = new_insert;
		return (new_insert);
	}
	while (temp->next)
		temp = temp->next;
		temp->next = new;
		return (new_insert);
}
