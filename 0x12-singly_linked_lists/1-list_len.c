#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - must return the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t w = 0;

	while (h)
	{
		w++;
		h = h->next;
	}
	return (w);
}
