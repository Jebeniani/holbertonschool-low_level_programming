#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: integer
 */

void print_line(int n)
{
	int c;

	for (c = 48; c < n; c++)
	{
		_putchar('_');
		_putchar('\n');
	}
}
