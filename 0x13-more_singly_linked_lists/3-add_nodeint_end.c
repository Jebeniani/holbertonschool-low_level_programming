#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head of a list
 * @n: pointer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (*head)
		{
			tail = *head;
			while (tail->next)
				tail = tail->next;
			tail->next = new;
			return (*head);
		}
		*head = new;
		return (*head);
	}
	return (NULL);
}
