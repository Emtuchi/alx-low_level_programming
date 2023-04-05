#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *new;

	tmp = head;

	while (tmp != NULL)
	{
		new = tmp->next;
		free(tmp);
		tmp = new;
	}
}
