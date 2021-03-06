#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: head of a list
 * @n: pointer
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tail->next)
		tail = tail->next;

	tail->next = new;
	new->prev = tail;
	return (new);
}
