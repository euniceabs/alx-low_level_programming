#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory allocated
 * for a doubly linked list.
 * It iterates through the list, freeing each node,
 * and sets the head pointer to NULL.
 *
 * Return: No return value.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
	next = current->next;
	free(current);
	current = next;
	}
}

