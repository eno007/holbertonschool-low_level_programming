#include "main.h"

/**
 * _islower -- entry point
 * prints as var c requested
 * Return: int c (Success)
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
