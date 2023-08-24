#include "lists.h"

/**
 * list_len - returns length of the list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)

{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
