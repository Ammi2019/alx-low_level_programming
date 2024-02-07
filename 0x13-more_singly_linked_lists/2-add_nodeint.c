#include "lists.h"

/**
 * add_nodeint - a function to  addsa new node at the beginning of a linked list
 * @head: pointer to the first node 
 * @n: variable that representd data inserted  in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *data_insert;

	data_insert = malloc(sizeof(listint_t));
	if (!data_insert)
		return (NULL);
	data_insert->n = n;
	data_insert->next = *head;
	*head = data insert;
	return (data_insert);
}
