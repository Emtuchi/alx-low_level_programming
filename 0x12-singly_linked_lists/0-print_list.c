#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the element of a list
 * @h: the list pointer
 *
 * Return: the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{

	if (tmp->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", tmp->len, tmp->str);
	}
	count++;
	tmp = tmp->next;
	}

	return (count);
}
