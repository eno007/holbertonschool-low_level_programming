#include "main.h"
#include <stdio.h>
/**
 * main - enters program
 * @c: The character to print
 * Return: On success 1.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
