#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of
 * @c: character
 * Return: Return NULL for the if conditions otherwise Return p.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
