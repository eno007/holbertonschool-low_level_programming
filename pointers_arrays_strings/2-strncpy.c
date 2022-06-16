#include "main.h"
#include <stdio.h>
/**
 * _strncpy - check the code
 * @dest: to check
 * @src: to check
 * @n: to check
 * Return: required output
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((dest[i]) != '\0')
	{
		i++;
	}
	for (i = 0; (src[i]) != '\0'  && (i < n); i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
