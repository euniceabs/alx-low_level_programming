#include "lists.h"

/**
 * print_listint - this function prints all the elements
 * in a linked list of integers
 * @h: a pointer to the head of the linked list.
 *
 * Return: the number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	node_count++;
	h = h->next;
	}

	return (node_count);
}

