#include "lists.h"

/**
 * listint_len -  counts the number of elements in a linked list
 * @h: a pointer to the head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
