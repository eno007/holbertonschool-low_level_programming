#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - enters program
 * @b: The character to check
 * Return: On success array
 */

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);
	return (array);
}
