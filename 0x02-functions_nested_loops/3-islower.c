#include "main.h"

/**
 * _islower - check whether the passed character is a lowercase letter
 * @c: check character
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
