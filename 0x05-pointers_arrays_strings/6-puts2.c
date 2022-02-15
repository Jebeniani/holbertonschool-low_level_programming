#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * Return: Always 0.
 */


int _strlen(char *str);

void puts2(char *str)
{
	int i, len;

	len = _strlen(str);


	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}


/**
 * _strlen - function that returns the length of a string.
 * @str: character
 *
 * Return: Always i.
 */



int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i;
	}
	return (i);
}
