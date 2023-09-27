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
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{				printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}			printf("[%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
