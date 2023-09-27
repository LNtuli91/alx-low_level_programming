#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * looped_listint_len - counts the number of unique nodes
 * in the looped listint_t linked list
 * @head: A pointer to the head of the listint\-t to check
 *
 * Return: 0 if the list is not looped,
 * else the number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoisei, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoisei = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoisei == head)
		{
			tortoisei = head;
			while (tortoisei != hare)
			{
				nodes++;
				tortoisei = tortoisei->next;
				hare = hare->next;
			}
			tortoisei = tortoisei->next;
			while (tortoisei != hare)
			{
				nodes++;
				tortoisei = tortoisei->next;
			}
			return (nodes);
		}
		tortoisei = tortoisei->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		current = current->next;
	}

	return (count);
}
