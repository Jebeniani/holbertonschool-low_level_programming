#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning of a list
 * @n: const int
 * @head: head of a node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
