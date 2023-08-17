#include "lists.h"

/**
 * print_dlistint - Prints elements of a doubly linked list and counts nodes.
 * @h: Pointer to the head of the list.
 *
 * Description: This function prints the elements of a doubly linked list,
 * one element per line, and also counts the total number
 * of nodes in the list. The provided pointer @h should point to
 * the head of the list. The function returns the count of nodes.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
