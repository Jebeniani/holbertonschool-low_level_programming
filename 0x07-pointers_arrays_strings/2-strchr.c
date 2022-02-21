#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: integer
 * @c: integer
 * Return: Always s.
 */

char *_strchr(char *s, char c)
{

	for (; c != '\0'; ++s)
	if (*s == c)
	break;

	return (s);
}
