#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of an array
 * @height: the height of an array
 * Return: always 0.
 */

int **alloc_grid(int width, int height)
{
	int **td;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	td = malloc(sizeof(int *) * height);
	if (td == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		td[h] = malloc(sizeof(int) * width);
		if (td[h] == NULL)
		{
			for (; h >= 0; h--)
				free(td[h]);
			free(td);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			td[h][w] = 0;
	}
	return (td);
}
