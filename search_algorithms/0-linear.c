#include "search_algos.h"
/**
 * linear_search - function that search for a val in an arr Linear search algo
 * @array: array of numbers to be checked
 * @size: number of elements that we have
 * @value: value to search for
 * Return: index i or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
