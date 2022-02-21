#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: integer
 * @n: integer
 * Return: Always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n--)
	{
	s[i] = (unsigned char)b;
	s++;
	}
	return (s);
}
