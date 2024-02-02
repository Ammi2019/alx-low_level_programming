#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a linked list
 * @head: double pointer
 * @str: String
* Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	unsigned int len = 0;

	while (str[len])
		len++;
	s = malloc(sizeof(list_t));
	if (!s)
		return (NULL);
	s->str = strdup(str);
	s->len = len;
	s->next = (*head);
	(*head) = s;
	return (*head);
}
