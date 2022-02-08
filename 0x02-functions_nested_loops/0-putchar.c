#include <unistd.h>

/**
 * main - prints _putchar
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
