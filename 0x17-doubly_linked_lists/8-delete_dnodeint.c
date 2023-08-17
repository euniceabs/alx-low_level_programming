#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given position
 * in the doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Description: This function deletes the node at the
 * specified index in a doubly linked list. It updates
 * the prev and next pointers of adjacent nodes as
 * necessary and frees the memory of the deleted node.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
		}
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (count = 0; current != NULL; count++)
	{
		if (count >= index)
			break;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
