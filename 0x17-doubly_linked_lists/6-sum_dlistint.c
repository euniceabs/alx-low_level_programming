#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data values in a
 * doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function calculates the sum of all the
 * data values stored in the nodes of a doubly linked list.
 * It traverses the list and adds up the data values to compute the sum.
 *
 * Return: Sum of the data values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
