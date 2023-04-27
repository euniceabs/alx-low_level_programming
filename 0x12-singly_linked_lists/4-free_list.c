#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this function releases the memory allocated for a list
 * by taking a pointer to the first node of the list and recursively
 * frees all the nodes and their corresponding strings.
 * @head: a pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
	free_list(head->next);
	if (head->str != NULL)
	{
	free(head->str);
	}
	free(head);
	}
}
