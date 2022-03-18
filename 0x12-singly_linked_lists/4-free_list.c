#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head: head of a node
 */

void free_list(list_t *head)
{
	list_t *tmpr;

	if (!head)
		return;

	while (head)
	{
		tmpr = head->next;
		free(head->str);
		free(head);
		head = tmpr;
	}
}
