#include "main.h"

/**
 *
 *
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 4)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	return (_sqrt_recursion(n));
	}
}
