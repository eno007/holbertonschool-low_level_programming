#include "main.h"
/**
 * _puts - check the code
 * @str: to check
 * Return: len
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
