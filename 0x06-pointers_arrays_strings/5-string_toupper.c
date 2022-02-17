#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a stringto uppercase
 * @str: string
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/*
		 * If current character is lowercase alphabet then
		 * convert it to uppercase.
		 */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (0);
}
