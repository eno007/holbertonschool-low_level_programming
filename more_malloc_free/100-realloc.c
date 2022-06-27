#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - enters program
 * @ptr: The character to check
 * @old_size: The character to check
 * @new_size: The character to check
 * Return: On success array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (new_size > old_size)
	{
		a = malloc(new_size);
		free(ptr);
		return (a);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		free(ptr);
		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
