#include "lists.h"

/**
 * add_node - add new node at the beginning
 * @head: head of the list
 * @str: string data of the list to be added
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

/**
 * _strlen - function to calculate the length of a const char string
 * @s: string to work with
 * Return: length of string.
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}
