#include "lists.h"

/**
 * add_nodeint - adds node.
 * @head: pointer to a struct
 * @n: name of new node
 *
 * Return: struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
