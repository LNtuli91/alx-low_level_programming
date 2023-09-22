#include "lists.h"
#include <stddef.h>

/**
 * list_len - print all the element of linked list
 * @h: Pointer the list to print
 *
 * Return: The number of nodes pointed
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
