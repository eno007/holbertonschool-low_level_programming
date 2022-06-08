#include "main.h"

/**
 * print_alphabet_x10 -- entry point
 * prints as requested
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
