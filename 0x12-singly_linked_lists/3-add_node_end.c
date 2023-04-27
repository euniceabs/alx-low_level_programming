#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - this function finds the length of a string
 * @str: the string to find the length of
 * Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int l;

	for (l = 0; str[l]; l++)
	;
	return (l);
}

/**
 * add_node_end - this function adds a new node to the end of linked list
 * @head: the double pointer to a linked list
 * @str: the string to add to the new node
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head)
	return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (!*head)
	*head = new_node;
	else
	{
	temp = *head;
	while (temp->next)
	temp = temp->next;

	temp->next = new_node;
	}

	return (new_node);
}

