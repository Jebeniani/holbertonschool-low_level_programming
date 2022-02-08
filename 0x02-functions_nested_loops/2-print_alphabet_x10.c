#include "main.h"

/**
 * print_alphabet_x10 - print the lowercase alphabet ten times
 *
 * Return: 0 
 */

void print_alphabet_x10(void)
{

		int i;
		char t;

			for (t = 1; t <= 10; t++)
			{
				for (i = 'a'; i <= 'z'; i++)
				{
					_putchar(i);
				}
			_putchar('\n');
			}
}
