#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - enters program
 * @c: The character to check
 * @size: The character to print
 * Return: On success 1.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size <= 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		*(array + i) = c;
	*(array + i) = '\0';
	return (array);
}
