#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: pointer
 * @n: string
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;
	int j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
