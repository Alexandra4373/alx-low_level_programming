#include "lists.h"

/**
 * pop_listint - deletes the head node and returns node’s data n
 * @head: pointer to a struct
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
