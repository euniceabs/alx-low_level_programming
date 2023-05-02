#include "lists.h"

/**
 * sum_listint - this calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: the total sum of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
	sum += node->n;
	node = node->next;
	}

	return (sum);
}
