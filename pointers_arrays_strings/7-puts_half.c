#include "main.h"
/**
 * puts_half - check the code
 * @str: to check
 * Return: required output
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
		i = (len + 1) / 2;
	else
		i = len / 2;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
