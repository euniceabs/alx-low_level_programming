#include "lists.h"

/**
 * free_listint2 - this function frees a linked list.
 * @head: pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
	current = (*head)->next;
	free(*head);
	*head = current;
	}

	*head = NULL;
}
