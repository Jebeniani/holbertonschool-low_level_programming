#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 * Return: always 0.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **j;

	j = malloc(sizeof(int *) * width);
	if (j == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
		for (i = 0; i < height; i++)
		{
			j[i] = malloc(sizeof(int) * height);
		}
	return (j);
}
