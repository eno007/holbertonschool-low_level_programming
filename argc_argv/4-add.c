#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - enters program
 * @argc: The character to check
 * @argv: The character to print
 * Return: On success 1.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
