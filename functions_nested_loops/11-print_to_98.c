#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -- entry point
 * @n: to check
 * Return: 0
 */
void print_to_98(int n)
{
	while(n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while(n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
