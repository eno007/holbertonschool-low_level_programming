#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code
 * @a: to check
 * @n: to check
 * Return: required output
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
