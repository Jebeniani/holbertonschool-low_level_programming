#include "lists.h"

/**
 * free_dlistint -  function that frees a list_t list.
 * @head: head of a node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpr;

	while (head)
	{
		tmpr = head;
		head = head->next;
		free(tmpr);
	}
}
