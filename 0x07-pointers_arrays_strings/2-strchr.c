#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: integer
 * @c: integer
 * Return: 0
 */

char *_strchr(char *s, char c)
{

	while (*s++)
	{
		if (*s == c)
		return (s);
	}
	return (0);
}
