#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - this function prints all the elements of a list_t list.
 * @h: the name of the list
 * Return: the number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}
	return (count);
}

