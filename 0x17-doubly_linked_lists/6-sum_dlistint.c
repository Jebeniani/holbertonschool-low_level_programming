#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n)
 * @head: head of a node
 * Return: Always the sum of all list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
