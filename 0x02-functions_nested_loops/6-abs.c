#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @j: integer
 * Return: value absolute
 */

int _abs(int j)
{
	if (j > 0)
		return (j);
	else if (j < 0)
		return (-j);
	return (0);
}
