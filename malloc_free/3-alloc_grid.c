#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - enters program
 * @width: The character to print
 * @height: The character to print
 * Return: On success joined else NULL
 */

int **alloc_grid(int width, int height)
{
	int **joined;
	int i = 0, j = 0;

	while (width <= 0 || height <= 0)
		return (NULL);
	joined = malloc(sizeof(int *) * height);
	if (joined == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		joined[i] = malloc(width * sizeof(int));
		if (joined[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(joined[i]);
			free(joined);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			joined[i][j] = 0;
		}
	}
	return (joined);
}
