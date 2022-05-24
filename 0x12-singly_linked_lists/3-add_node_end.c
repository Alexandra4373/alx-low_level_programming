#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newN = malloc(sizeof(list_t));

	if (!newN)
		return (NULL);

	newN->str = strdup(str);

	newN->len = len;
	newN->next = NULL;

	if (*head == NULL)
	{
		*head = newN;
		return (newN);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newN;

	return (newN);
}
