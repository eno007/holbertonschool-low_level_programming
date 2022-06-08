#include "main.h"

/**
 * _islower -- entry point
 * @c is the character that the code will check
 * Return: 1 if lowercase or 0 if UPPERCASE
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
