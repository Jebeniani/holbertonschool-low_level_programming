#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destnation
 * @src: source
 * Return: Always dest.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
		for (i = 0 ; src[i] != '\0' ; i++)
		{
			dest[dest_len + i] = src[i];
		}
			dest[dest_len + i] = '\0';
	return (dest);
}
