#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * int_index - enters program
 * @array: The character to check
 * @size: The character to check
 * @cmp: The character to check
 * Return: On success array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (++i < size)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
