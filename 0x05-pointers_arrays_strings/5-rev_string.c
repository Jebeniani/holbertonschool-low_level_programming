#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char tmp;
	int i, j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1; j > (i - 1) / 2; j--)
	{
		tmp = s[j];
		s[j] = s[k];
		s[k] = tmp;
		k++;
	}
}
