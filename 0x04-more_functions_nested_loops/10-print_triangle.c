#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int row, column, j;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (j = row + column; j >= 1; j--)
			_putchar('#');
		_putchar('\n');
	}
}
