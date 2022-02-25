#include <stdio.h>

/**
 * main - number of arguments
 * @argc: integer
 * @argv: pointer
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return (0);
}
