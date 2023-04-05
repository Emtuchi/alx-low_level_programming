#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head node
 * @n: new node element
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *before_endnode;
	listint_t *endnode;

	before_endnode = *head;
	endnode = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}

	if (endnode == NULL)
	{
		return (NULL);
	}

	endnode->n = n;
	endnode->next = NULL;

	while (before_endnode->next != NULL)
	{
		before_endnode = before_endnode->next;
	}

	before_endnode->next = endnode;

	return (endnode);
}
