#include "lists.h"

/**
 * pop_listint - this function deletes the head node in the linked list
 * @head: points to the first element in the linked list
 *
 * Return: data inside the element that was deleted,
 * or 0 if the list is null
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
	return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
