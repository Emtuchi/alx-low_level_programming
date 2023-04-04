#include "list.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a listint_t list
 * @h: the head node (pointer)
 * Return: the number of nodes (int/size_t)
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (count);
}
