#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Struct op
 * @argc: The operator
 * @argv: The operator
 * Return: a pointer
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num2 = atoi(argv[1]);
	if (num2 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (num1 = 0; num1 < num2; num1++)
	{
		printf("%02hhx ", *((char *)main + num1));
		if (num1 < (num2 - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
