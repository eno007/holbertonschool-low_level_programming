#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _check_digit - enters program
 * @argv: The character to check
 * Return: On success array
 */
int _check_digit(char *argv)
{
	int i = 0;

	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * _length - enters program
 * @s: The character to check
 * Return: On success array
 */
int _length(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _length(s));
	}
	else
		return (0);
}
/**
 * main - enters program
 * @argc: The character to check
 * @argv: The character to check
 * Return: On success array
 */
int main (int argc, char *argv[])
{
	int i, j, k, output, num1, num2, len;
	int *all;

	if (argc < 3 || argc > 3 || !(_check_digit(argv[1])) || !(_check_digit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}
	num1 = _length(argv[1]);
	num2 = _length(argv[2]);
	len = num1 + num2;
	all = calloc(len, sizeof(int*));
	if (all == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = (num2 - 1); i > -1; i--)
	{
		output = 0;
		for (j = (num1 - 1); j > -1; j--)
		{
			k = (argv[2][i] - '0') * (argv[1][j] - '0');
			output = (k / 10);
			all[(i + j) + 1] += (k % 10);
			if (all[(i + j) + 1] > 9)
			{
				all[i + j] += all[(i + j) + 1] / 10;
				all[(i + j) + 1] = all[(i + j) + 1] % 10;
			}
			all[(i + j)] += output;
		}
	}
	if (all[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < len; i++)
		printf("%d", all[i]);
	printf("\n");
	free(all);
	return (0);
}
