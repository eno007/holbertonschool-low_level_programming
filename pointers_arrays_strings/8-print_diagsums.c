#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: to check
 * @size: to check
 * Return: required output
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int m, n;

	for (m = 0; m < size; m++)
	{
		n = (m * size) + m;
		i = i + a[n];
	}
	for (m = 1; m <= size; m++)
	{
		n = (m * size) - m;
		j = j + a[n];
	}
	printf("%d, %d\n", i, j);
}
