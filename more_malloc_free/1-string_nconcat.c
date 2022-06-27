#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - enters program
 * @array: The character to check
 * Return: On success i
 */
int _strlen(char *array)
{
	int i = 0;

	while (array[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - enters program
 * @s1: The character to check
 * @s2: The character to check
 * @n: The character to check
 * Return: On success array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int len, i, j;
	int num;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;
	array = malloc(sizeof(*array) * len);
	if (array == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0';  i++)
		array[i] = s1[i];
	for (j = 0; j < num; j++)
		array[i + j] = s2[j];
	array[i + j] = '\0';
	return (array);
}
