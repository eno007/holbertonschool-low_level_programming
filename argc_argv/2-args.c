#include "main.h"
#include <stdio.h>
/**
 * main - enters program
 * @argc: The character to check
 * @argv: The character to print
 * Return: On success 1.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
