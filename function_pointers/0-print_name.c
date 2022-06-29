#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_name - enters program
 * @name: The character to check
 * @f: The character to check
 * Return: On success array
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
