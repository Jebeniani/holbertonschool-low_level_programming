#include <stdio.h>
#include<string.h>
#define N 10.
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; ++x)
{
	putchar('0' + x);
	if (x < 9)
	{
	putchar(',');
	putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
