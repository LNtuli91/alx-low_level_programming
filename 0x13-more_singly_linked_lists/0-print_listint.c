#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list
 * @h: Linked list of type listint_t to be printed
 *
 * Return: Numberof nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
