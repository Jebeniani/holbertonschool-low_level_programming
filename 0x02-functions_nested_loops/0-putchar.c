#include <unistd.h>
#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char *str;

	str = "_putchar\n";
	for (i = 0; i <= 8; i++)
	{
	_putchar(str[i]);
	}
	return (0);
}
