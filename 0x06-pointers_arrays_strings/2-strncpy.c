#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destnation
 * @src: source
 * @n: integer
 * Return: Always dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
