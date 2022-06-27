#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - enters program
 * @nmemb: The character to check
 * @size: The character to check
 * Return: On success array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size;  i++)
		*((char *)array + i) = 0;
	return (array);
}
