#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - enters program
 * @str: The character to print
 * Return: On success 1.
 */

char *_strdup(char *str)
{
	char *copy_str;
	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
	{
		length++;
		i++;
	}
	length++;
	copy_str = malloc(sizeof(char) * length);
	if (copy_str == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(copy_str + i) = *(str + i);
		i++;
	}
	return (copy_str);
}
