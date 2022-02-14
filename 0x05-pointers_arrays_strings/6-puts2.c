#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(input); i += 2)
	{
		putchar(input[i]);
	}
}
