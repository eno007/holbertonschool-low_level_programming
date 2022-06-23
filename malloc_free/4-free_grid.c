#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - enters program
 * @grid: The character to print
 * @height: The character to print
 * Return: On success joined else NULL
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
