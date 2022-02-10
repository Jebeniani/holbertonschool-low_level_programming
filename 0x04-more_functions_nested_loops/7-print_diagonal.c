#include "main.h"

/**
 * print_diaginal - function that draws a diagonal line on the terminal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(92);
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
