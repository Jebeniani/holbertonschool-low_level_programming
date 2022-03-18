#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head node
 * @str: pointer
 * Return: Always ne
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tmpr = *head;
	int length = 0;

	while (str[length])
		length++;
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	while (tmpr->next != NULL)
	tmpr = tmpr->next;
	tmpr->next = new_node;
	return (new_node);
}
