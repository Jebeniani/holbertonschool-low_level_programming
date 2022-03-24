#include "main.h"

/**
 * binary_to_uint - it converts a binary number to an unsigned int.
 * @b: pointer
 * Return: the converted number or 0 if b is null and
 * there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == 48 || b[i] == 49)
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
