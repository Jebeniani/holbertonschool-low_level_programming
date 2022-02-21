#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * 
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	while(n--)
	{
	*s++ = (unsigned char)b;
	}
	return (s);
}
