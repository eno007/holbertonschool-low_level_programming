#include "search_algos.h"
/**
 * binary_search - function that will search according to binary search method
 * @array: array to be checked
 * @size: length of array
 * @value: value to be checked
 * Return: index or -1 if not successful
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	print_array(array, left, size);
	while (left < right)
	{
		mid = ((left + right) / 2);
		if (array[mid] < value)
		{
			left = mid + 1;
			print_array(array, left, size);
		}
		else if (array[mid] > value)
		{
			right = mid;
			print_array(array, left, right + 1);
		}
		else
			return (mid);
	}
	return (-1);
}
/**
 * print_array - prints an array of integers
 * @array: the array to be printed
 * @position: index to start printing the array
 * @size: number of elements in @array
 */
void print_array(int *array, size_t position, size_t size)
{
	size_t i;

	printf("Searching in array: ");

	i = position;
	while (array && i < size)
	{
		if (i > position)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
