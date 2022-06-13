#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: to check
 * Return:  0 or 1.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(' ');
		if (i == n)
			_putchar('\\');
	}
	_putchar('\n');
}
