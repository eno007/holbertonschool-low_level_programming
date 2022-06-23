#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _length - enters program
 * @s: The character to print
 * Return: On success len
 */
int _length(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
		s++;
	return (len);
}

/**
 * argstostr - enters program
 * @ac: The character to print
 * @av: The character to print
 * Return: On success joined else NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		len += _length(av[a]);
	len += (ac + 1);
	s = malloc(len * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; b < _length(av[a]); b++)
			s[c++] = av[a][b];
		s[c++] = '\n';
	}
	return (s);
}
