#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * Return: Always 0.
 */

char *cap_string(char *str, char *new)
{
	int i=0;

	new[i] = toupper(str[0]);
	i++;
	while(str[i] != '\0')
	{
		if(isspace(str[i]))
		{
			new[i] = str[i];
			new[i+1] = toupper(str[i+1]);
			i+=2;
		}
		else
		{
			new[i] = str[i];
			i++;
		}
	}
}
