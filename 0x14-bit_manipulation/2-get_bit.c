#include "main.h"

/**
 * get_bit - returns th value of a bit at a given index
 * @n: unsigned long int
 * @index: index
 * Return: the values of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
