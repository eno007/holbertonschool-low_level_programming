#include "main.h"

/**
 * print_line - check the code.
 * @n: to check
 * Return:  0 or 1.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
