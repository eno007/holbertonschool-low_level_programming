#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - enters program
 * @s1: The character to print
 * @s2: The character to print
 * Return: On success 1.
 */

char *str_concat(char *s1, char *s2)
{
	char *joined;
	int i = 0, j = 0, length = 0, length1 = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		length++;
		i++;
	}
	while (*(s2 + j))
	{
		length1++;
		j++;
	}
	length1++;
	joined = malloc(sizeof(char) * (length + length1));
	if (joined == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < length)
	{
		*(joined + i) = *(s1 + i);
		i++;
	}
	while (j < length1)
	{
		*(joined + i) = *(s2 + j);
		i++;
		j++;
	}
	return (joined);
}
