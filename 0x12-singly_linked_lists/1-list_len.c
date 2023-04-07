#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints the element of a list
 * @h: the list pointer
 *
 * Return: the number of nodes in h
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int n = 0;

	temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
