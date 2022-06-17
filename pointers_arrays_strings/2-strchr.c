#include "main.h"
#include <stdio.h>
/**
 * _strchr - check the code
 * @s: to check
 * @c: to check
 * Return: required output
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
		return('\0');
}
