#include <stdio.h>

/**
 * main - number of arguments
 * @argc: integer
 * @argv: pointer
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
