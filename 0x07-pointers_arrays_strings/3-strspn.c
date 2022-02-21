#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: integer
 * @accept: character
 * Return: Always n
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	const char *p;

	for (n = 0; *s; s++, n++)
	{
	for (p = accept; *p && *p != *s; p++)
	;
		if (!*p)
		break;
	}
	return (n);
}
