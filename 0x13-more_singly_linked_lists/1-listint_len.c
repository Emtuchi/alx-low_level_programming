#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts list length
 * @h: head
 *
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	return (count)
}
