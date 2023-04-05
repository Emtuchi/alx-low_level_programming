#include "lists.h"

/**
 * pop_listint - function that deletes the head node.
 * @head: Head node.
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = (*head)->next;

	free(temp);
	return (n);
}
