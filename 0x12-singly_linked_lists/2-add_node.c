#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at beginning linked list
 * @head: double pointer the list to print
 * @str: new string to add the node
 *
 * Return: The number of nodes pointed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
