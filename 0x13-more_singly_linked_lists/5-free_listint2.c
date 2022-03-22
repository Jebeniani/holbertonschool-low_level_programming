#include "lists.h"

/**
 * free_listint2 -  function that frees a list_t list.
 * @head: head of a node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpr;

	if (head)
	{
		while (*head)
		{
			tmpr = *head;
			*head = (*head)->next;
			free(tmpr);
		}
	}
}
