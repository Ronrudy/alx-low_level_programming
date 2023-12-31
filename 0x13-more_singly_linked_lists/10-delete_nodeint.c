#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list
 * @head: pointer at beginning
 * @index: index of node
 * Return: 1 if successful and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
