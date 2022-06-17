#include "main.h"
#include <stdio.h>
/**
 * _memset - check the code
 * @s: to check
 * @b: to check
 * @n: to check
 * Return: required output
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int p = n;

	if (n > 0)
	{
		for (i = 0; i < p; i++)
			s[i] = b;
	}
	return (s);
}
