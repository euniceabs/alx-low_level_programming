#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to fetch.
 *
 * Description: This function returns a pointer to the nth node of a
 * doubly linked list. The provided index starts at 0.
 * If the node at the given index does not exist, the
 * function returns NULL.
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count;

	for (node_count = 0; head != NULL; node_count++)
	{
		if (node_count == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
