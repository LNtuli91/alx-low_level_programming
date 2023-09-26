#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the 1rst node in the list
 *
 * Return: Pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
