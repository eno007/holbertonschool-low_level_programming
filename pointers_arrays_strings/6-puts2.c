#include "main.h"
/**
 * puts2 - check the code
 * @str: to check
 * Return: required output
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
