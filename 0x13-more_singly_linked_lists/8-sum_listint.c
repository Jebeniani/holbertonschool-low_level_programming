#include "lists.h"

/**
 * sum_listint - the sum of all the data (n)
 * @head: head of a node
 * Return: Always the sum of all list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
