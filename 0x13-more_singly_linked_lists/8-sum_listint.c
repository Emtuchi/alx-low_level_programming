#include "lists.h"

/**
 * sum_listint - find the sum
 * @head: head pointer
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp != NULL)
	{
		sum = sum + (temp->n);
		temp = temp->next;
	}

	return (sum);
}
