#include <stdlib.h>
#include "lists.h"

/**
 * free_list - It must free a linked list
 * @head: list_t free lists
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
