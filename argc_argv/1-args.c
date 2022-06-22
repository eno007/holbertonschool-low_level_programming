#include "main.h"
#include <stdio.h>
/**
 * main - enters program
 * @argc: The character to check
 * @argv: The character to print
 * Return: On success 1.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
