#include "main.h"
#include <string.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: Always s.
 */

char *_strpbrk(char *s, char *accept)
{
	s += strcspn(s, accept);
	return (s);
}
