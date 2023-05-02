#include "lists.h"

/**
 * add_nodeint - creates a new node and adds
 * it to the beginning of a linked list
 * @head: a pointer to the head of the list
 * @n: the data to be stored in the new node
 *
 * Return: a pointer to the new node, or NULL if allocation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

