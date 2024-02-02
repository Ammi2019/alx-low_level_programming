#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a linked list
 * @head: double pointer
 * @str: string
* Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_nw;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	_nw = malloc(sizeof(list_t));
	if (!_nw)
		return (NULL)
	_nw->str = strdup(str);
	_nw->len = len;
	_nw->next = NULL;
	if (*head == NULL)
	{
		*head = _nw;
		return (_nw);
	}
	while (tmp->next)
		tmp = tmp->next;
		tmp->next = _nw;
	return (_nw);
}
