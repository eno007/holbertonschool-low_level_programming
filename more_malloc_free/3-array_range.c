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
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1);  i++)
		array[i] = min++;
	return (array);
}
