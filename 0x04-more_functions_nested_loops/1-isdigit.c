#include "main.h"
#include <ctype.h>

/**
 * _isdigit - a function that checks if a character is a decimal digit or not
 * @c: integer
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
