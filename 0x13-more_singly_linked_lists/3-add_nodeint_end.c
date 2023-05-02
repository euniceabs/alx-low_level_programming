#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node to the end of a linked list.
 *
 * @head: the pointer to the first element of the list.
 * @n: the data to be inserted into the new node.
 *
 * Return: a pointer to the newly created node, or NULL if the function fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	while (temp_node->next != NULL)
	{
	temp_node = temp_node->next;
	}

	temp_node->next = new_node;

	return (new_node);
}

