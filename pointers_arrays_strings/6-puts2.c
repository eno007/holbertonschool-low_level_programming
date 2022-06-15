#include "main.h"
/**
 * puts2 - check the code
 * @str: to check
 * Return: required output
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
