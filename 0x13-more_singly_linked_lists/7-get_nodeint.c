#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: head node
 * @index: the index of the node to return.
 * Return: Node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}

		count++;
		temp =  temp->next;
	}

	return (NULL);
}
