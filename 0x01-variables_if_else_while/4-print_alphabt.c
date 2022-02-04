#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, lower_x;

	x = 'A';

	for (x = 'A'; x <= 'Z'; x++)
	if (x != 'E' && x != 'Q')
{
	lower_x = tolower(x);
	putchar (lower_x);
}
	putchar ('\n');
	return (0);
}
