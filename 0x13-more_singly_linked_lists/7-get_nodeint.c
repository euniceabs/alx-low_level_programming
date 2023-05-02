#include "lists.h"

/**
 * get_nodeint_at_index - returns a pointer to the node at
 * the specified index in the linked list
 * @head: a pointer to the first node in the linked list
 * @index: the index of the node to return
 *
 * Return: a pointer to the node at the specified index,
 * or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;

	while (current_node && i < index)
	{
	current_node = current_node->next;
	i++;
	}

	return (current_node ? current_node : NULL);
}

