#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: pointer
 * @src: array
 * @n: unsigned integer
 * Return: Always dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;

	for (i = 0; i < n; i++)
		d[i] = s[i];

	return (dest);
}
