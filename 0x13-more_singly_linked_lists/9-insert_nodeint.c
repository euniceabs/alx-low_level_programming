#include "lists.h"

/**
* insert_nodeint_at_index - this function inserts a new node in a linked list
* at a specified position
* @head: the pointer to the first node in the list
*@idx: the index where the new node should be inserted
* @n: the data to be stored in the new node
*
* Return: pointer to the new node, or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node, *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	for (j = 0; temp_node && j < idx; j++)
	{
	if (j == idx - 1)
	{
	new_node->next = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
	}
	else
	temp_node = temp_node->next;
	}

	return (NULL);
}
