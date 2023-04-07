#include "lists.h"

/**
 * add_node_end - at new node to the end of a linked list
 * @head: a double pointer to the head of a linked list
 * @str: the string to be copied to str member of the linked list
 * Return: a pointer to the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	temp = *head;
	newnode->next = NULL;
	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = _strlen(str);

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be determined
 * Return: the length of s
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
