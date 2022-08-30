#include "search_algos.h"
/**
 * binary_search - finds the position of a target value within a sorted array.
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, last = size - 1, mid = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (last + first) / 2;
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			last = mid - 1;

		else
			first = mid + 1;
	}
	return (-1);
}
