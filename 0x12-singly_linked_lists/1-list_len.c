#include <stdlib.h>
#include "lists.h"

/**
 * list_len - must return the elements number in a linked list
 * @h: pointer to the list_t list of elements
 *
 * Return: element numbers in h
 */
size_t list_len(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}
	return (v);
}
