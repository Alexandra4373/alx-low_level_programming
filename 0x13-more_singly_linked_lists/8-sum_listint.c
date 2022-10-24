#include "lists.h"

/**
 * sum_listint - returns the sum of n values
 * @head: pointer to a struct
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;

	}

	return (sum);

}
