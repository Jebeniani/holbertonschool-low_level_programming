#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: Always sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(ap, n);         /* Initialize the argument list. */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);    /* Get the next argument value. */

	va_end(ap);                  /* Clean up. */
	return (sum);
}
