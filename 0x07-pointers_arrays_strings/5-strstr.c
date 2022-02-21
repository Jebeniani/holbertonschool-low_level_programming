#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: character
 * @needle: character
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}

	return (0);
}
