#include "main.h"
#include <stdio.h>
/**
 * _strcat - check the code
 * @dest: to check
 * @src: to check
 * Return: required output
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while ((dest[i]) != '\0')
	{
		i++;
	}
	while ((src[j]) != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
