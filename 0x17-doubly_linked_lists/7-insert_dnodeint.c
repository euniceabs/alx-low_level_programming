#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specified index.
 * @h: Pointer to the pointer that points to the head of the list.
 * @idx: Index at which the new node should be inserted
 * @n: Value to be stored in the new node.
 *
 * Description: This function inserts a new node with the
 * given value at the specified index in a doubly linked list.
 * If the index is 0, the new node is added at the beginning
 * of the list. If the index is greater than the number
 * of existing nodes, the new node is not inserted.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int position = 0;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	for (; current != NULL; current = current->next, position++)
	{
		if (position == idx - 1)
			break;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}

	current->next = new_node;
	return (new_node);
}
