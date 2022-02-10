#include "main.h"

/**
 * more_numbers - function that prints ten times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, t;

	for (i = 0; i < 10; i++)
{
	for (t = 0; t <= 14; t++)
{
	if (t > 9)

	_putchar((t / 10) + 48);
	_putchar((t % 10) + 48);
}
	_putchar('\n');
}
}
