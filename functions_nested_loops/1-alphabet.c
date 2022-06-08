#include "main.h"

/**
 * print_alphabet -- entry point
 * prints as requested
 * Return: void (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
