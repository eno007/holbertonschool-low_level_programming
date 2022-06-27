#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - enters program
 * @min: The character to check
 * @max: The character to check
 * Return: On success array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, length;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	array = malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length;  i++)
		array[i] = min++;
	return (array);
}
