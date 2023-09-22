#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the element of linked list
 * @h: Pointer the list to print
 *
 * Return: The number of nodes pointed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		count++;
	}

	return (count);
}
