#include "main.h"
#include <stdio.h>
/**
 * _memcpy - check the code
 * @dest: to check
 * @src: to check
 * @n: to check
 * Return: required output
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int p = n;

	if (p > 0)
	{
		for (i = 0; i < p; i++)
			dest[i] = src[i];
	}
	return (dest);
}
