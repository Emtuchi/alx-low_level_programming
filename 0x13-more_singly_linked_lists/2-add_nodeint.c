#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head node
 * @n: integer value
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node2;

	if (head == NULL)
	{
		return (NULL);
	}
	node2 = malloc(sizeof(listint_t));

	if (node2 == NULL)
	{
		return (NULL);
	}

	node2->n = n;
	node2->next = *head;
	*head = node2;

	return (node2);
}
