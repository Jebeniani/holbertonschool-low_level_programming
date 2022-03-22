#include "lists.h"

/**
 * free_listint -  function that frees a list_t list.
 * @head: head of a node
 */

void free_listint(listint_t *head)
{
	listint_t *tmpr;

	while (head)
	{
		tmpr = head;
		head = head->next;
		free(tmpr);
	}
}
