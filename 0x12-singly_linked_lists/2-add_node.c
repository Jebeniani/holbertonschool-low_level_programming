#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: pointer
 * Return: Address of new element or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *tmpr;

	tmpr = malloc(sizeof(list_t));
	if (tmpr == NULL)
		return (NULL);
	tmpr->str = strdup(str);
	while (str[count] != '\0')
		count++;
	tmpr->str = strdup(str);
	while (str[count] != '\0')
		count++;
	tmpr->len = count;
	tmpr->next = *head;
	*head = tmpr;
	return (tmpr);
}
