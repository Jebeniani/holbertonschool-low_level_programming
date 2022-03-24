#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	char bit;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	if (n == 1)
	{
		_putchar(49);
		return;
	}
	print_binary(n >> 1);
	bit = (n & 1) ? 49 : 48;
	_putchar(bit);
}
