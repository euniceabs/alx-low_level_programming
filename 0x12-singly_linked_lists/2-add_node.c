#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - this function returns the length of a string.
 * @s: the string to calculate the length of.
 * Return: the length of the string.
 */
int _strlen(const char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * add_node - this function adds a new node at beginning of a list_t list.
 * @head: the head of a list_t list.
 * @str: the value to insert into element.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

