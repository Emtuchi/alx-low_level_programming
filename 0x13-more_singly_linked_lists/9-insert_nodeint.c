#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the pointer to the starting node of the listint_t list
 * @idx: the position where the new node is to be inserted
 * @n: the data to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;
	unsigned int count = 0;
	listint_t *prev;

	if (*head == NULL)
	{
		return (NULL);
	}

	newnode = (listint_t *) malloc(sizeof(listint_t));
	newnode->n = n;
	temp = *head;

	while (temp != NULL)
	{
		prev = temp;
		count++;

		if (count == idx)
		{
			newnode->next = temp;
			prev->next = newnode;

			return (newnode);
		}

		temp = temp->next;
	}

	return (NULL);
}
