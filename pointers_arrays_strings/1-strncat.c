#include "main.h"
#include <stdio.h>
/**
 * _strncat - check the code
 * @dest: to check
 * @src: to check
 * @n: to check
 * Return: required output
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while ((dest[i]) != '\0')
	{
		i++;
	}
	while ((src[j]) != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
