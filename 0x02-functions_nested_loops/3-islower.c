#include "main.h"

/**
 * islower - check whether the passed character is a lowercase letter
 *
 * Return: 1 if lowercase, 0 of uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
