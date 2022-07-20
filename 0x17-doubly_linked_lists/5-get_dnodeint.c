#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: head of a node
 * @index: index of a node
 * Return: pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head && index; index--)
		head = head->next;
	return (head);
}
