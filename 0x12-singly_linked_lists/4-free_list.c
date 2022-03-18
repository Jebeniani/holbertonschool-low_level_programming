#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head: head of a node
 */

void free_list(list_t *head)
{
	list_t *tmpr;

	while (head != NULL)
	{
		tmpr = head;
		head = head->next;
		free(tmpr);
	}
}
