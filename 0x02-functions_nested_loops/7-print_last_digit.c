#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int s = n % 10;

	if (n < 0)
	{
		s = s * -1;
	}
		_putchar('0' + s);
		return (s);
}
