#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_alphabet(void)
{
	int i;

	for (i = 97 ; i <= 122; i++)

	_putchar(i);

	_putchar('\n');
	return (0);
}
