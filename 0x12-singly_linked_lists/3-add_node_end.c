#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: the length of the string
 */

size_t _strlen(const char *s)

{
	size_t len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;

		while (last->next)
			last = last->next;
		last->next = new_node;
	}

	return (new_node);
}
