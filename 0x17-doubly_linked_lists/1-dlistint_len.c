#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * description: This function calculates the number of elements in a
 * doubly linked list by traversing it using a `for` loop.
 * It returns the count of elements in the list.
 *
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp;

	for (tmp = h; tmp != NULL; tmp = tmp->next)

	{
	count++;
	}

	return (count);
}
