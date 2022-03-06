#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer
 * @src: pointer destination
 *  Return: Always pointer.
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (p);
}
