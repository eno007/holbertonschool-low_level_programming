#include "main.h"

/**
 * print_binary - process that prints
 * @n: number to be printed
 * Return: the number converted
 */
void print_binary(unsigned long int n)
{
	int len = 0;
	unsigned long int converted_n = n;
	unsigned long int tmp = 1;

	while (converted_n > 0)
	{
		len++;
		converted_n >>= 1;
	}
	len -= 1;
	if (len > 0)
		tmp = tmp << len;
	while (tmp > 0)
	{
		if (n & tmp)
			_putchar('1');
		else
			_putchar('0');
		tmp >>= 1;
	}
}
