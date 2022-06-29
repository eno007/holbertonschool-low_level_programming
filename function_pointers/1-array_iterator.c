#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - enters program
 * @array: The character to check
 * @size: The character to check
 * @action: The character to check
 * Return: On success array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}
