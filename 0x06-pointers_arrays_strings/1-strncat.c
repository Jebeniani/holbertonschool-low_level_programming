#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destnation
 * @src: source
 * @n: integer
 * Return: Always dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
		for (i = 0 ; i < n && src[i] != '\0' ; i++)
		{
			dest[dest_len + i] = src[i];
		}
			dest[dest_len + i] = '\0';

	return (dest);
}