#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Always c.
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i]; i++)
		;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j]; j++)
		;
	c = malloc((i + j + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		c[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		c[k + i] = s2[k];
	}
	c[i + j] = '\0';
	return (c);
}
