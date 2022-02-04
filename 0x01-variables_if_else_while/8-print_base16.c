#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, c;

	x = '0';

	for (x = '0'; x <= '9'; x++)
{
	putchar (x);
}
	for (c = 'a'; c <= 'f'; c++)
	putchar (c);
	putchar ('\n');
}
