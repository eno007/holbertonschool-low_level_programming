#include "main.h"

/**
 * print_last_digit -- entry point
 * @n: character that the code will check
 * Return: 0 or != 0
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
