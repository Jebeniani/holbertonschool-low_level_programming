#include "lists.h"

/**
 * add_note - function that adds a new node at the beginning of a list_t list
 * @head: double pointer
 * @str: pointer
 *
 * Return: Adress of new element
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
