#include "main.h"
#include <stdio.h>
/**
 * _strcmp - check the code
 * @s1: to check
 * @s2: to check
 * Return: required output
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (diff);
}
