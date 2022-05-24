#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of list
 * @head: points to the head of list
 * @str: what goes in the new node
 * Return: address of new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *newN;

	if (!(head && str))
		return (NULL);
	newN = malloc(sizeof(list_t));
	if (!newN)
		return (NULL);
	for (i = 0; str[i]; i++)
	{}
	newN->str = strdup(str);
	if (!(newN->str))
	{
		free(newN);
		return (NULL);
	}
	newN->len = i;
	newN->next = *head;
	*head = newN;

	return (newN);
}
