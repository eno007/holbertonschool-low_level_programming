#include "main.h"

/**
 * _isalpha -- entry point
 * @c: character that the code will check
 * Return: 1 if lowercase or UPPERCASE 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
