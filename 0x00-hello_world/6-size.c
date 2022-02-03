#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char A;
	int Z;
	long int E;
	long long int R;
	float T;

	printf("Size of a char: %zu byte(s)\n", sizeof(A));
	printf("Size of an int: %zu byte(s)\n", sizeof(Z));
	printf("Size of a long int: %zu byte(s)\n", sizeof(E));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(R));
	printf("Size of a float: %zu byte(s)\n", sizeof(T));
	return (0);
}
